// In this the case is same as Stair_Path1_Rec.c just the steps climbed at a time are increased to 1,2,3.
#include <stdio.h>
int stair(int n){
    if (n==1)
    {
        return 1;
    }

    if (n==2)
    {
        return 2;
    }
    
    if (n==3)
    {
        return 4; // there are 4 ways--> 1+1+1, 1+2, 2+1, 3.
    }
    
    return stair(n-1)+stair(n-2)+stair(n-3);
}
int main(){
    int n;
    printf("enter the number of stairs to be climbed:");
    scanf("%d",&n);

    printf("The number of ways to climb %dth stairs are %d.",n,stair(n));
    
    return 0;
}