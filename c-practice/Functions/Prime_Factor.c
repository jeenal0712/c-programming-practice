#include <stdio.h>
void prime(int* x){
    for(int i=2; i<=*x; i++)
    {
        if (*x%i==0)
        {
            printf("%d\n",i);
            *x=*x/i;
        }
    }
}
int main(){
    int a;
    printf("Enter the number you want prime factors of:");
    scanf("%d",&a);
    int* x=&a;
    prime(x);
    return 0;
}