#include <stdio.h>
int main(){
    int n;
    printf("enter the number of lines:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        int a=1;
        while (a!=0)
        {
            for (int j = 1; j <=2*i; j++)
            {
                if (j%2!=0)
                {
                   printf("%d ",j);
                }  
            }
            a=a-1;
        }
        printf("\n");
    }
    return 0;
}