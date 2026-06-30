#include <stdio.h>
// method 1
/*int main(){
    // print a series 1-2+3-4+5.......upto n terms.
    int n;
    printf("enter the till u want sum of series:");
    scanf("%d",&n);
    int sum=0;
    for (int i = 1; i<=n; i++)
    {
        if (i%2==0)
        {
            sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }
    }
    printf("the sum of the series is %d",sum);
    //method 2 
    return 0;
}*/
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int sum=0;
    if (n%2==0)
    {
        sum=-n/2; // we got these by solving the equation.
    }
    else 
    {
        sum=(-n/2)+n;
    }
    printf("the sum is %d",sum);
    return 0;
}