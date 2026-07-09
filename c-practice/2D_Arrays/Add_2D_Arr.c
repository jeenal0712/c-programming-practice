// write a program to add 2 matrices.
#include <stdio.h>
int main(){
    int r;
    printf("enter the number of rows:");
    scanf("%d",&r);

    int c;
    printf("enter the number of columns:");
    scanf("%d",&c);

    printf("first matrix:\n");
    int m[r][c];
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            printf("Enter the element %d of row %d:",j+1,i+1);
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }

    printf("second matrix:\n");
    int n[r][c];
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            printf("Enter the element %d of row %d:",j+1,i+1);
            scanf("%d",&n[i][j]);
        }
        printf("\n");
    }
    
    printf("resultant matrix:\n");
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            printf("%d ",m[i][j]+n[i][j]);
        }
        printf("\n");
    }
    return 0;
}