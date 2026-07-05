//Count the number of elements in an array greater than a given number x.
#include <stdio.h>
int count(int arr[],int n,int x){
    int c=0;
    for (int i = 0; i <n; i++)
    {
        if (arr[i]>x)
        {
            c=c+1;
        }
    }
    
    return c;
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

    int x;
    printf("Enter the number you want to compare with:");
    scanf("%d",&x);

    int a=count(arr,n,x);
    printf("The number of elements greater than %d are: %d",x,a);

    return 0;
}