#include <stdio.h>
int main(){
    int n;
    printf("enter the number u want the sum of:");
    scanf("%d",&n);
    int s=0;
    int ld=0;
    while (n!=0)
    {
        ld=n%10;
        if (ld%2==0)
        {
            s=s+(n%10);
        }
        n=n/10;
    }
    printf("the sum of even digits is %d",s);
    return 0;
}