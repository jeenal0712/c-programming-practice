#include <stdio.h>
int expo(int a,int b,int p){
    
    if (b==0)
    {
        return p;
    }

    p=p*a;

    expo(a,b-1,p);
}
int main(){
    int a;
    printf("enter the base number:");
    scanf("%d",&a);

    int b;
    printf("enter the power:");
    scanf("%d",&b);

    int pro=expo(a,b,1);

    printf("The solution is %d",pro);

    return 0;
}