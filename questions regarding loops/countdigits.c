#include <stdio.h>
int main(){
    int n;
    printf("enter the number u want to count digits of:");
    scanf("%d",&n);
    int count=0;
    while (n!=0)
    {
        n=n/10;
        count=count+1;
    }
    printf("the number of digits is %d",count);
    return 0;
}