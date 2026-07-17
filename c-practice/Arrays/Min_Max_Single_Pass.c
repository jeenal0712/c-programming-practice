// Find the largest and smallest element in one traversal.
#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    printf("Enter the number of elements you want in ur array:");
    scanf("%d",&n);

    int a[n];
    for (int i = 0; i <n; i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");

    int min=a[0];
    int max=a[0];
    for (int i = 0; i <n; i++)
    {
        if (min>a[i])
        {
            min=a[i];
        }
        if (max<a[i])
        {
            max=a[i];
        }
    }
    
    printf("The largest number of the array is:%d\n",max);
    printf("The smallest number of the array is:%d",min);

    return 0;
}