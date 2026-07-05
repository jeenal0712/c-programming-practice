//In an array of integers,change the values of of all odd indexed elements to its second multiple and increment all even indexed value by 10.
#include <stdio.h>
void update(int arr[],int n){
    for (int i = 0; i <n; i++)
    {
        if (i%2==0)
        {
            arr[i]=arr[i]+10;
        }
        else
        {
            arr[i]=2*arr[i];
        }
    }
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

    printf("Array is:");
    for (int i = 0; i <n; i++)
    {
        printf("%d,",arr[i]);
    }
    printf("\n");

    update(arr,n);

    printf("Updated array is:");
    for (int i = 0; i <n; i++)
    {
        printf("%d,",arr[i]);
    }
    
    return 0;
}