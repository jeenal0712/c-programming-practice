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
        int minindex=i;
        int min=a[i];
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
    
    printf("\nThe sorted array is:\n");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}