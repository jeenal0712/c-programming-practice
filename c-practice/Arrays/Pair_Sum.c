// Find all pairs whose sum equals a given number.
#include <stdio.h>
int pairsum(int arr[],int n,int x){
    int p=0;
    for (int i = 0; i <n; i++)
    {
        for (int j =i+1; j <n; j++)
        {
            if (arr[i]+arr[j]==x)
            {
                printf("%d,%d\n",arr[i],arr[j]);
            } 
        }
    }
    
    return p;
}
int main(){
    int n;
    printf("Enter the number of elements you want in array:");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i <n; i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    int x;
    printf("Enter the number you want sum be equal to:");
    scanf("%d",&x);

    printf("The pairs are:\n");
    pairsum(arr,n,x);

    return 0;
    
}