//Find the intersection of two arrays
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements you want in array:");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i <n; i++)
    {
        printf("Enter the element %d of first array:",i+1);
        scanf("%d",&a[i]);
    }

    int m;
    printf("Enter the number of elements you want in array 2:");
    scanf("%d",&m);

    int b[n];

    for (int i = 0; i <m; i++)
    {
        printf("Enter the element %d of second array:",i+1);
        scanf("%d",&b[i]);
    }

    printf("The intersection is:\n");

    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            if (a[i]==b[j])
            {
                printf("%d ",a[i]);
                break;
            }
            
        }
        
    }

    return 0;
}