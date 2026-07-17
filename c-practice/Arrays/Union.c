// Find the union of two arrays.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements you want in array 1:");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i <n; i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&a[i]);
    }

    int m;
    printf("Enter the number of elements you want in array 2:");
    scanf("%d",&m);

    int b[m];

    for (int i = 0; i <m; i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&b[i]);
    }

    int uni[n+m];
    int k=0;

    for (int i = 0; i<n; i++)
    {
        int found=0;
        for (int j = 0; j<k; j++)
        {
            if (a[i]==uni[j])
            {
                found=1;
                break;
            }
            
        }
        if (found==0)
        {
            uni[k]=a[i];
            k++;
        }
    }
    
    for (int i = 0; i<m; i++)
    {
        int found=0;
        for (int j = 0; j<k; j++)
        {
            if (b[i]==uni[j])
            {
                found=1;
                break;
            }
            
        }
        if (found==0)
        {
            uni[k]=b[i];
            k++;
        }
    }
    
    printf("The union is:\n");

    for (int i = 0; i <k; i++)
    {
        printf("%d ",uni[i]);
    }
    
    return 0;
}