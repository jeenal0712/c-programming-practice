// In this we have to count the number of ways a person who is standing on ground can climb nth stair using one step or two step at a time.
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
    
    
    int totalways= stair(n-1)+stair(n-2);

    return totalways;
}
int main(){
    int n;
    printf("enter the number of stairs to be climbed:");
    scanf("%d",&n);

    printf("The number of ways to climb %dth stairs are %d.",n,stair(n));

    return 0;
}