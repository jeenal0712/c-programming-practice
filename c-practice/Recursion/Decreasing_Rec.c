#include <stdio.h>
//before recursive call
int decreasing(int n){
    if (n==0)                 //base case
    {
        return printf("0");
    }
    printf("%d\n",n);
    decreasing(n-1);    // recursion relation
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}