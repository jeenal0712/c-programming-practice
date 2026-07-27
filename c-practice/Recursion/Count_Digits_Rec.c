//Count digits recursively.
#include <stdio.h>
int countdigits(int n,int count){
    if (n==0)
    {
        return count;
    }
    count++;
    return countdigits(n/10,count);
}
int main(){
    int n;
    printf("Enter the digit:");
    scanf("%d",&n);

    int c=0;
    if (n == 0)
    {
        printf("The number of digits is: 1");
    }
    else
    {
        printf("The number of digits is: %d", countdigits(n, 0));
    }

    return 0;
}