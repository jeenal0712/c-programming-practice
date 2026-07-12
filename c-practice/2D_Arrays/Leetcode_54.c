//A matrix 'a' of n*m order,print all the elements of the matrix in sprial order.(LEETCODE-54)
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

    int minr=0;
    int maxr=r-1;
    int minc=0;
    int maxc=c-1;
    int e=c*r;
    int count=0;

    while (count<e)
    {
        for (int i = minc; i <=maxc; i++)
        {
            printf("%d ",a[minr][i]);
            count=count+1;
        }
        minr++;
        if (count>=e)
        {
            break;
        }
        for (int i = minr; i <=maxr; i++)
        {
            printf("%d ",a[i][maxc]);
            count=count+1;
        }
        maxc--;
        if (count>=e)
        {
            break;
        }
        for (int i = maxc; i >=minc; i--)
        {
            printf("%d ",a[maxr][i]);
            count=count+1;
        }
        maxr--;
        if (count>=e)
        {
            break;
        }
        for (int i = maxr; i >=minr; i--)
        {
            printf("%d ",a[i][minc]);
            count=count+1;
        }
        minc++;
        if (count>=e)
        {
            break;
        }
    }
    
    return 0;
}