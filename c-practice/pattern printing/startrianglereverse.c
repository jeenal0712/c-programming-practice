#include <stdio.h>
int main(){
    int n;
    printf("enter the lines:");
    scanf("%d",&n);
    for (int i =0 ; i <n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            if (j>=n-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}