// find out the maximum and minimum element of a 2D array.
#include <stdio.h>
#include <limits.h>
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

    int max=INT_MIN;
    int min=INT_MAX;
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            if (max<m[i][j])
            {
                max=m[i][j];
            }
            if (min>m[i][j])
            {
                min=m[i][j];
            }
        }
    }

    printf("The maximum element is:%d\n",max);
    printf("The minimum element is:%d",min);

    return 0;
}