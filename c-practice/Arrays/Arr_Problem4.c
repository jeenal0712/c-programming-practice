//Find the total number of pairs in the array whose sum is equal to the given value x.
#include <stdio.h>
int countsum(int arr[],int n,int x){
    int p=0;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            if (arr[i]+arr[j]==x)
            {
                p=p+1;
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
    printf("Enter the number you want to compare with:");
    scanf("%d",&x);

    int pair=countsum(arr,n,x);
    printf("The total number of pairs in the array whose sum is equal to %d: %d",x,pair);

    return 0;
}