//Find the element that appears only once while others appear twice.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements you want in array:");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i <n; i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&a[i]);
    }

    for (int i = 0; i <n; i++)
    {
        int count=0;
        for (int j = 0; j <n; j++)
        {
            if (a[i]==a[j])
            {
                count++;
            }
            
        }
        if (count==1)
        {
            printf("The unique element is:%d",a[i]);
            break;
        }
        
    }
    
    return 0;
}