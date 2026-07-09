//check if the array is palindrome or not.
#include <stdio.h>
void palindrome(int arr[],int n){
    int i=0;
    int j=n-1;

    while(i<j){
        if (arr[i]!=arr[j])
        {
           printf("this is not a palindrom.");
           return;
        }
        i++;
        j--;
    }

    printf("this is a palindrome.");
}
int main(){
    int n;
    printf("Enter the number of elements you want in array:");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i <n; i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    palindrome(arr,n);
    
    return 0;
}