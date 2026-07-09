//write a program to print the row number having the maximum sum in a given matrix.
#include <stdio.h>
int main(){
    int r;
    printf("enter the number of rows:");
    scanf("%d",&r);

    int c;
    printf("enter the number of columns:");
    scanf("%d",&c);

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

    int rn=0;
    int msum=0;

    printf("the matrix is:\n");

     for (int i = 0; i <r; i++)
    {
        int sum=0;
        for (int j = 0; j <c; j++)
        {
            printf("%d ",m[i][j]);
            sum=sum+m[i][j];
        }
        if (sum>msum)
        {
            msum=sum;
            rn=i+1;
        }
        printf("\n");
    }

    printf("The maximum sum is of row number %d",rn);

    return 0;
}