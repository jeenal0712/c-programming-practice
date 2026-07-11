/*if matrix is:
1 2 3
4 5 6
7 8 9 
output should be:
1 2 3
6 5 4 
7 8 9*/
#include <stdio.h>
int main(){
    int r;
    printf("enter the number of rows:");
    scanf("%d",&r);

    int c;
    printf("enter the number of columns:");
    scanf("%d",&c);
    
    int a[r][c];
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element %d of %d row:",j+1,i+1);
            scanf("%d",&a[i][j]);
        } 
    }
    
    for (int i = 0; i <r; i++)
    {
        if (i%2!=0)
        {
           for (int j = c-1; j >=0; j--)
            {
                printf("%d ",a[i][j]);
            } 
        }
        else
        {
            for (int k = 0; k <c; k++)
            {
                printf("%d ",a[i][k]);
            }  
        }
        printf("\n");
    }
    
    return 0;
}