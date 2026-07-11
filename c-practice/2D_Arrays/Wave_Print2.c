/*If the matrix is this:
1 2 3
4 5 6
7 8 9
then the output will be:
7 4 1
2 5 8
9 6 3*/
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
    
    for (int i = 0; i <c; i++)
    {
        if (i%2==0)
        {
           for (int j = r-1; j >=0; j--)
            {
                printf("%d ",a[j][i]);
            } 
        }
        else
        {
            for (int k = 0; k <r; k++)
            {
                printf("%d ",a[k][i]);
            }  
        }
        printf("\n");
    }
    
    return 0;
}