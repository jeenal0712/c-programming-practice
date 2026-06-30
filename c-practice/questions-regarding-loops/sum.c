#include <stdio.h>
int main(){
    // print sum of the given number and its reverse.
    int n;
    printf("enter the number you want sum of:");
    scanf("%d",&n);
    int sum=n;
    int ld,rev=0;
    while (n!=0)
    {
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    sum=sum+rev;
    printf("the sum is %d",sum);
    return 0;
}