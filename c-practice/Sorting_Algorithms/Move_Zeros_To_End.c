//Question:
//Given an integer array arr, move all 0's to the end of the array while maintaining the relative order of the non-zero elements.
//Note:You must do this in-place without making a copy of the array.
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

    for (int i = 0; i <=n-2; i++)
    {
        for (int j = 0; j <=n-i-2; j++)
        {
            if (a[j]==0)
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("\nAfter pushing the zeroes:\n");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}