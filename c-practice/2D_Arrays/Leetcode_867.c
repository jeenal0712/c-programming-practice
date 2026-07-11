// write a program to print the transpose of the matrix entered by the user.(LEETCODE-867)
#include <stdio.h>
int main(){
    int n;
    printf("enter the number of rows and columns for a square matrix:");
    scanf("%d",&n);

    int a[n][n];
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            printf("Enter the element %d of row %d:",j+1,i+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix is:\n");
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Transposed Matrix:\n");
    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            int temp=a[j][i];
            a[j][i]=a[i][j];
            a[i][j]=temp;
        }
    }
     
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
} 