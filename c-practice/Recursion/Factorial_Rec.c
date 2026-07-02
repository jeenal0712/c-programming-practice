#include <stdio.h>
int factorial(int n){
    if (n==1||n==0)    //base case
    {
        return 1;
    }
    
    return (n*factorial(n-1));  //recursion relation
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int s= factorial(n);
    printf("%d",s);
    return 0;
}