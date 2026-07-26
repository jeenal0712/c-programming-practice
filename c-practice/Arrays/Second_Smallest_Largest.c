//Find the second smallest and second largest element.
#include <stdio.h>
#include <limits.h>
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

    int max=INT_MIN;
    int smax=INT_MIN;
    int min=INT_MAX;
    int smin=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (max<arr[i])
        {
            smax=max;
            max=arr[i];
        }
        else if (arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
        }
        if (min>arr[i])
        {
            smin=min;
            min=arr[i];
        }
        else if (arr[i] < smin && arr[i] != min)
        {
            smin = arr[i];
        }
    }
    
    printf("Second largest element:%d\n",smax);
    printf("Second smallest element:%d\n",smin);

    return 0;
}