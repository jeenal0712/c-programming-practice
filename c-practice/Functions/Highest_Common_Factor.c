#include <stdio.h>
void hcf(int* x,int* y){
    int pro=1;
    for (int i = 1; i <=*x; i++)
    {
        if (*x%i==0 && *y%i==0)
        {
            pro=pro*i;
            *x=*x/i;
            *y=*y/i;
        }
    }
    printf("The highest common factor is: %d",pro);
}
int main(){
    int a;
    printf("enter the first number you want hcf of:");
    scanf("%d",&a);
    int* x=&a;
    int b;
    printf("enter the second number you want hcf of:");
    scanf("%d",&b);
    int* y=&b;
    hcf(x,y);
    return 0;
}