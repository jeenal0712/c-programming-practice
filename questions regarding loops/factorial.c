#include <stdio.h>
int main(){
    int n;
    printf("enter the number you want factorial of:");
    scanf("%d",&n);
    int pro=1;// because if we will take 0, it would be problematic cause of multiplication.
    for (int i = 1; i <=n; i++)
    {
        pro=pro*i;
    }
    printf("the factorial of %d is %d",n,pro);   
    return 0;
}