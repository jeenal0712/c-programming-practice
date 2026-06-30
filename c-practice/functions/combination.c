#include <stdio.h>
int factorial(int a){
    int f=1;
    for (int i = 1; i <=a; i++)
    {
        f=f*i;
    }
    return f;
}
int combination(int n, int r){
    int c;
    c=factorial(n)/(factorial(r)*factorial(n-r));
    return c;
}
int main(){
    int n,r;
    printf("Enter the value of n and r: ");
    scanf("%d %d",&n,&r);
    printf("The combination of %d and %d is: %d",n,r,combination(n,r));
    return 0;
}