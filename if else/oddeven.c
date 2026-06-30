#include <stdio.h>
int main(){
    int x;
    printf("EnteR a Number");
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("This number is Even.");
    }
    else
    {
        printf("This is a Odd number.");
    }
    return 0;
}