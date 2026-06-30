#include <stdio.h>
int main(){
    int n;
    printf("enter the number u want to be reversed:");
    scanf("%d",&n);
    int rev=0;
    int ld=0;
    while (n!=0)
    {
        ld=n%10;
        rev=(rev*10)+ld;
        n=n/10;
    } 
    printf("the number reversed is %d",rev);
    return 0;
}