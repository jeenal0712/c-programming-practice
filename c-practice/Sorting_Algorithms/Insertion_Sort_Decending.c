// using insertion sort to sort the array in decending order.
#include <stdio.h>
int main(){
    int n;
    printf("enter the total number of elements you want in array:");
    scanf("%d",&n);

    int a[n];
    for (int i = 0; i <n; i++)
    {
        printf("enter the %d element of array:",i+1);
        scanf("%d",&a[i]);
    }

    for (int i = 1; i < n; i++)
    {
        int key=a[i];
        int j;
        for (j = i - 1; j >= 0 && a[j] < key; j--)
        {
            a[j+1]=a[j];  
        }
        a[j+1]=key;
    }
    
    printf("\nThe sorted array is:\n");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}