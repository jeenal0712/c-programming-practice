//Reverse an array without using the extra array.
#include <stdio.h>
void reverse(int n){
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    printf("The original array is:");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int i=0;
    int j=n-1;
    while (i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    
    printf("The reversed array is:");
    for (int k = 0; k <n; k++)
    {
        printf("%d ",arr[k]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter the number of elements you want in array:");
    scanf("%d",&n);
    reverse(n);
    return 0;
}