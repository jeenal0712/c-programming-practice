// Write a program to rotate a matrix 90 degree clockwise. (LEETCODE-48)
#include <stdio.h>
int main(){
    int n;
    printf("enter the number of rows and columns for square matrix:");
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
    //transposing matrix.
    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            int temp=a[j][i];
            a[j][i]=a[i][j];
            a[i][j]=temp;
        }
    }

    printf("Rotated matrix is:\n");
    for (int i = 0; i <n; i++)
    {
        int j=0;
        int k=n-1;
        while (j<k)
        {
            int z=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=z;
            j++;
            k--;
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