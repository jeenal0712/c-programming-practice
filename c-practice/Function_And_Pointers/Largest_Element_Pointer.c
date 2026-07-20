//Find the largest element using pointer traversal only.
#include <stdio.h>
int largest(int a[],int n){
    int i=0;
    int max=a[0];
    int* p=a;
    while (i<n)
    {
        if (max<*p)
        {
            max=*p;
        }
        p++;
        i++;
    }
    
    return max;
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
    
    printf("The largest element is:%d",largest(arr,n));

    return 0;
}