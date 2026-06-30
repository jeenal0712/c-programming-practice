#include <stdio.h>
int main(){
    int n;
    printf("enter the number u want the sum of:");
    scanf("%d",&n);
    int s=0;
    while (n!=0)
    {
        s=s+(n%10);
        n=n/10;
    }
    printf("the sum of digits is %d",s);
    return 0;
}