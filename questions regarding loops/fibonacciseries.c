#include <stdio.h>
int main(){
    // we have to print 1 1 2 3 5 8 13 21 34 55....
    int n;
    printf("enter the nth term:");
    scanf("%d",&n);  
    int a=1;
    int b=1;
    int sum=0;
    for (int i = 1; i <=n; i++)
    {
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}