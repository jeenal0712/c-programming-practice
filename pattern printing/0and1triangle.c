#include <stdio.h>
int main(){
    int n;
    printf("enter the number of lines:");
    scanf("%d",&n);
    int p=0;
    for (int i = 1; i <=n; i++)
    {
        if (i%2==0)
        {
            p=1;
        }
        else
        {
            p=0;
        }
        int a=i;
        while (a!=0)
        {
            
            if (p==0)
            {
                printf("%d",p);
                p=p+1;
            }
            else
            {
                printf("%d",p);
                p=p-1;
            }
            a=a-1;
        }
        printf("\n");
    }
    
    return 0;
}