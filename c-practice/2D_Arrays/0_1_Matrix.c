//A matrix having only 0-1 only. Find the row with maximum number of 1's.
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
            printf("Enter 0 or 1 for element %d of row %d:",j+1,i+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    int compare=0;
    int ri=0;
    printf("The matrix is:\n");
    for (int i = 0; i <n; i++)
    {
        int count=0;
        for (int j = 0; j <m; j++)
        {
            printf("%d",a[i][j]);
            if (a[i][j]==1)
            {
                count=count+1;
            }
            
        }
        if (compare<count)
        {
            compare=count;
            ri=i;
        }
        printf("\n");
    }

    printf("The row which has maximum numbers of 1's is:%d",ri+1);

    return 0;
}