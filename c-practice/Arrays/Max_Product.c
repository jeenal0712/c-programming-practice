//Find maximum product of two elements.
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

    int mpr=INT_MIN;
    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if (arr[i]*arr[j]>mpr)
            {
                mpr=arr[i]*arr[j];
            }
        }
    }
    
    printf("Maximum product:%d\n",mpr);

    return 0;
}