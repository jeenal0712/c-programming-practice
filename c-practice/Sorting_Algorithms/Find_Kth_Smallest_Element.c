//Question:
//Given an integer array and an integer k, where k <= size of the array, return the kth smallest element of the array.
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

    int k;
    printf("Enter the integer k(must be equal or less than n):");
    scanf("%d",&k);

    int min;
    for (int i = 0; i <k; i++) //n-1 passes
    {
        int minindex=i;
        min=a[i];
        for (int j = i+1; j <n; j++)
        {
            if (min>a[j])
            {
                minindex=j;
                min=a[j];
            }
        }
        if (minindex!=i)
        {
            int temp=a[i];
            a[i]=a[minindex];
            a[minindex]=temp;
        }  
    }

    printf("The %dth smallest element of the array:%d",k,min);

    return 0;
}