#include <stdio.h>
void factorial(int n){
    for (int i = 1; i <=n; i++)
    {
        printf("%d- ",i);
        for (int j = 1; j <=i; j++)
        {
            if (i%j==0)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}
int main(){
    int a;
    printf("enter the number till which you want factors of:");
    scanf("%d",&a);
    factorial(a);
    return 0;
}