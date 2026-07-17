//Find the missing number from an array containing numbers 1 to n.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number till you want numbers to be inserted:");
    scanf("%d",&n);

    int arr[n-1];
    for (int i = 0; i <n-1; i++)
    {
        printf("Enter the %d element btw 1 to n(no duplicate element):",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");

    int sumarr=0;
    for (int i = 0; i <n-1; i++)
    {
        sumarr=sumarr+arr[i];
    }
    
    int sum=0;
    for (int i = 1; i <=n; i++)
    {
        sum=sum+i;
    }
    
    printf("The missing number is:%d",sum-sumarr);
    
    return 0;
}