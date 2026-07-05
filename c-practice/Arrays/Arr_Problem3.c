//Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include <stdio.h>
int diff(int arr[],int n){
    int e=0;
    int o=0;
    for (int i = 0; i <n; i++)
    {
        if (i%2==0)
        {
            e=e+arr[i];
        }
        else
        {
            o=o+arr[i];
        }
    }
    return e-o;
}
int main(){
    int n;
    printf("enter the number of elements you want in array:");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i <n; i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    int d=diff(arr,n);
    printf("The difference between the sum of even and indices element is:%d",d);
    
    return 0;
}