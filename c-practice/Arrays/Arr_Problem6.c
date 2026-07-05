//find the second largest element in an array.
#include <stdio.h>
#include <limits.h>
int secondmax(int arr[],int n){

    int c=INT_MIN;
    int d=INT_MIN;

    for (int i = 0; i <n; i++)
    {
        if (arr[i]>c)
        {
            d=c;
            c=arr[i];
        }
        else if (d<arr[i] && c!=arr[i]) //If maximum number is at 0 index or maximum number is repeated.
        {
            d=arr[i];
        }
    }

    return d;
}
int main(){
    int n;
    printf("enter the number of elements you want in array:");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i <n; i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    int sol=secondmax(arr,n);

    printf("The second largest element of the array is: %d",sol);

    return 0;
}