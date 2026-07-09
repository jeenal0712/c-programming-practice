// find the sum of elements of n * m matrix.
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
    int sum=0;

    printf("the matrix is:\n");

     for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            printf("%d ",m[i][j]);
            sum=sum+m[i][j];
        }
        printf("\n");
    }

    printf("The sum of all elements is:%d",sum);

    return 0;
}