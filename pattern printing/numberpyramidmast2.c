/*for n=4
  1234321
  123 321
  12   21
  1     1*/
#include <stdio.h>
int main(){
    int n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for (int k = 0; k <n; k++)
    {
        int ch=0;
        for (int i = 1; i <=n-k ; i++)
        {
            printf("%d",i);
        }
        for (int i = 0; i <(2*k)-1; i++)
        {
            printf(" ");
            ch=ch+1;
        }
        for (int i = n-k; i >=1; i--)
        {
            if (i==n)
            {
                continue;
            }
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}