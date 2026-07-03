#include <stdio.h>
int sum(int n,int s){
    s=s+n;
    if (n==0)
    {
        return s;
    }
    sum(n-1,s);
}
int main(){
    int n;
    printf("enter the number till you want sum:");
    scanf("%d",&n);
    int m=sum(n,0);
    printf("The sum is %d",m);
    return 0;
}