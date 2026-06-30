/*
for n=4 
1111111
1222221
1233321
1234321
1233321
1222221
1111111
*/
#include <stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int min=0;
    for (int j = 1; j <=n; j++)
    {
        for (int i = 1; i <=n; i++)
        {
            if (i>j)
            {
                min=j; 
            }
            else
            {
                min=i;
            }
            printf("%d",min);
        }
        for (int i = n-1; i >=1; i--)
        {
            if (i>j)
            {
                min=j; 
            }
            else
            {
                min=i;
            }
            printf("%d",min);
        }
        printf("\n");  
    }
    for (int j = n-1; j >=1; j--)
    {
        for (int i = 1; i <=n; i++)
        {
            if (i>j)
            {
                min=j; 
            }
            else
            {
                min=i;
            }
            printf("%d",min);
        }
        for (int i = n-1; i >=1; i--)
        {
            if (i>j)
            {
                min=j; 
            }
            else
            {
                min=i;
            }
            printf("%d",min);
        }
        printf("\n"); 
    }
    return 0;
}