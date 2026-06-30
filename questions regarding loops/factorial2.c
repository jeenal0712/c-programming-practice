#include <stdio.h>
int main(){
    /*we have to print like if n= 5
    1
    2
    6
    24
    120*/
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int pro=1;
    for (int i = 1; i <=n; i++)
    {
        for (int r = 1; r <=i; r++)
        {
            pro=pro*r;
        }
        printf("%d \n",pro);
        pro=1;
    }
    
    return 0;
}