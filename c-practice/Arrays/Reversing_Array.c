// Declare an array and takes it inputs from user and then reverse it.
#include <stdio.h>
void reverse(int n){
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The original array is:");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int rev[n];
    for (int i =0; i<n; i++)
    {
        rev[i]=arr[n-1-i];
        
    }
    printf("The reversed array is:");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",rev[i]);
    }
}
int main(){
    int n;
    printf("enter the number of elements you want in array:");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
