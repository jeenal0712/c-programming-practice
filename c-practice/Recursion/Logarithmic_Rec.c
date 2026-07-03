#include <stdio.h>
int powlog(int a,int b){
    if (b==1)
    {
        return a;
    }

    if (b%2==0 && b!=0)
    {
        return powlog(a,b/2)*powlog(a,b/2);
    }

    if (b%2!=0)
    {
        return powlog(a,b/2)*powlog(a,b/2)*a;
    }

    return 1;
}
int main(){
    int a;
    printf("enter the base number:");
    scanf("%d",&a);

    int b;
    printf("enter the power:");
    scanf("%d",&b);

    printf("The solution is %d",powlog(a,b));
    
    return 0;
}