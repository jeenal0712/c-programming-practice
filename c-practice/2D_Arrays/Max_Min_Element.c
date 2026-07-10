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
    int imi=0;
    int imj=0;
    int ini=0;
    int inj=0;
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            if (max<m[i][j])
            {
                max=m[i][j];
                imi=i;
                imj=j;
            }
            if (min>m[i][j])
            {
                min=m[i][j];
                ini=i;
                inj=j;
            }
        }
    }

    printf("The maximum element is:%d and index is:[%d][%d]\n",max,imi,imj);
    printf("The minimum element is:%d and index is:[%d][%d]",min,ini,inj);

    return 0;
}