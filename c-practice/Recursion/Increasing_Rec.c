#include <stdio.h>
//way 1: before recursive call
/*int increasing(int n,int i){
    if (i==n)                 //base case
    {                         _
        return 0;              |
    }                          |--//code
    i=i+1;                     |
    printf("%d\n",i);         _|
    return increasing(n,i);    // recursive call
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    increasing(n,0);
    return 0;
}*/
// way 2: after recursive call
int increasing(int n){
    if (n==0)                 //base case
    {
        return printf("0\n");
    }
    increasing(n-1);    // recursive call
    printf("%d\n",n);   // code
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    increasing(n);
    return 0;
}
