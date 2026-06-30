#include <stdio.h>
int main(){
    int n;
    printf("enter the lines:");
    scanf("%d",&n);
    int b;
    printf("enter the breath:");
    scanf("%d",&b);
    for (int i = 1; i <=n; i++)
    {
        if (i==1||i==n)
        {
            for (int j = 0; j < b; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int k = 1; k <=b; k++)
            {
                if (k==1||k==b)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}