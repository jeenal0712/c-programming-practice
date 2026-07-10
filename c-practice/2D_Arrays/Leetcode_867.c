// write a program to print the transpose of the matrix entered by the user.(LEETCODE-867)
#include <stdio.h>
int main(){
    int n;
    printf("enter the number of rows:");
    scanf("%d",&n);

    int m;
    printf("enter the number of columns:");
    scanf("%d",&m);

    int a[n][m];
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            printf("Enter the element %d of row %d:",j+1,i+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix is:\n");
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Transposed Matrix:\n");
    int t[m][n];
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <n; j++)
        {
            t[i][j]=a[j][i];
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }

    return 0;
} 