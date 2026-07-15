//optimization for the case of nearly sorted array (removes extra passes).
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
    
    int swapped=0;
    for (int i = 0; i <=n-2; i++)
    {
        for (int j = 0; j <=n-i-2; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=1;
            }
        }
        if (swapped==0)
        {
            break; //array is already sorted.
        }
        
    }
    
    printf("\nThe sorted array is:\n");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}