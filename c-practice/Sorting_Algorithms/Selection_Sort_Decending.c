//using selection sort to sort the array in decending order.
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

    
    for (int i = 0; i < n-1; i++) //n-1 passes
    {
        int maxindex=i;
        int max=a[i];
        for (int j = i+1; j <n; j++)
        {
            if (max<a[j])
            {
                maxindex=j;
                max=a[j];
            }
        }
        if (maxindex!=i)
        {
            int temp=a[i];
            a[i]=a[maxindex];
            a[maxindex]=temp;
        }  
    }
    
    printf("\nThe sorted array is:\n");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}