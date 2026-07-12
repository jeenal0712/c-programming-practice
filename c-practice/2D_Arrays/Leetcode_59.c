//Given a positive integer n, generate an n × n matrix filled with elements from 1 to n² in spiral order. (LeetCode – 59)
#include <stdio.h>
int main(){
    int n;
    printf("enter the number of rows or columns for n*n matrix:");
    scanf("%d",&n);

    printf("The matrix is:\n");
    int a[n][n];
    int minr=0;
    int maxr=n-1;
    int minc=0;
    int maxc=n-1;
    int e=(n*n)+1;
    int count=1;

    while (count<e)
    {
        for (int i = minc; i <=maxc; i++)
        {
            a[minr][i]=count;
            count=count+1;
        }
        minr++;
        if (count>=e)
        {
            break;
        }
        for (int i = minr; i <=maxr; i++)
        {
            a[i][maxc]=count;
            count=count+1;
        }
        maxc--;
        if (count>=e)
        {
            break;
        }
        for (int i = maxc; i >=minc; i--)
        {
            a[maxr][i]=count;
            count=count+1;
        }
        maxr--;
        if (count>=e)
        {
            break;
        }
        for (int i = maxr; i >=minr; i--)
        {
            a[i][minc]=count;
            count=count+1;
        }
        minc++;
        if (count>=e)
        {
            break;
        }
    }

    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        } 
        printf("\n");
    }
    return 0;
}