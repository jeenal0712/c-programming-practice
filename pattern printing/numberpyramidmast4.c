/* for n=4
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
#include <stdio.h>
int main(){
    int n;
    printf("enter the number of lines:");
    scanf("%d",&n);
    int max;
    for (int j = n; j >=1; j--)
    {
        for (int i = n; i >=1; i--)
        {
            if (i>j)
            {
                max=i;
            }
            else
            {
                max=j;
            }
            printf("%d",max);
        }
        for (int i = 2; i<=n; i++)
        {
            if (i>j)
            {
                max=i;
            }
            else
            {
                max=j;
            }
            printf("%d",max);
        }
        printf("\n");
    }
    for (int j = 2; j <=n; j++)
    {
        for (int i = n; i >=1; i--)
        {
            if (i>j)
            {
                max=i;
            }
            else
            {
                max=j;
            }
            printf("%d",max);
        }
        for (int i = 2; i<=n; i++)
        {
            if (i>j)
            {
                max=i;
            }
            else
            {
                max=j;
            }
            printf("%d",max);
        }
        printf("\n");
    }
    return 0;
}