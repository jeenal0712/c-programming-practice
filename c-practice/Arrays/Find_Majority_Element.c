//Find the majority element (appears more than n/2 times).
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

    int m=n/2;

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
        if (count>m)
        {
            printf("The majority element is:%d",a[i]);
            break;
        }
        
    }
    
    return 0;
}