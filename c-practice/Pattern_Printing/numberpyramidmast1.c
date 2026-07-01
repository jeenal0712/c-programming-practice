/*for n=4
  1234567
  123 567
  12   67
  1     7*/
#include <stdio.h>
int main(){
    int n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for (int k = 0; k <n; k++)
    {
        if(k==0)
        {
           for (int i = 1; i <=n*2-1; i++)
            {
               printf("%d",i);
            }
            printf("\n");
        }
        else
        {
            int ch=0;
            for (int i = 1; i <=n-k ; i++)
            {
                printf("%d",i);
                ch=ch+1;
            }
            for (int i = 0; i <(2*k)-1; i++)
            {
                printf(" ");
                ch=ch+1;
            }
            for (int i = ch+1; i <=(2*n)-1; i++)
            {
                printf("%d",i);
            }
            printf("\n");
        }
    }
    return 0;
}