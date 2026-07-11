//write a program to print the multiplication of 2 matrices given by user.
#include <stdio.h>
int main(){
    int n;
    printf("enter the number of rows for first matrix:");
    scanf("%d",&n);

    int m;
    printf("enter the number of columns for first matrix or rows for second matrix:");
    scanf("%d",&m);

    int o;
    printf("enter the number of columns for second matrix:");
    scanf("%d",&o);
    
    printf("The first matrix:\n");
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

    printf("The second matrix:\n");
    int b[m][o];
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <o; j++)
        {
            printf("Enter the element %d of row %d:",j+1,i+1);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("Matrix A:\n");
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <o; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("Matrix AB:\n");
    for (int i = 0; i <n; i++)
    {
        
        for (int j = 0; j <o; j++)
        {
            int t=0;
            for (int k = 0; k <m; k++)
            {
                t=t+a[i][k]*b[k][j];
            }
            printf("%d ",t);
        }
        printf("\n");
    }
    
    return 0;
}