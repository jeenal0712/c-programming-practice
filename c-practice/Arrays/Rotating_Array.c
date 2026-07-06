//Rotate the array by 'k' steps,k is non negative and k can be greater than n as well where n is the size of array.
#include <stdio.h>
int reverse(int arr[],int i,int j){
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
    return 0;
}
int rotate(int arr[],int n,int k){
    k=k%n;
    reverse(arr,0,n-1);
    
    reverse(arr,0,k-1);
    
    reverse(arr,k,n-1);
    
    printf("The rotated array is:");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
int main(){
    int n;
    printf("Enter the number of elements you want in array:");
    scanf("%d",&n);

    int k;
    printf("Enter the steps:");
    scanf("%d",&k);

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

    rotate(arr,n,k);

    return 0;
}