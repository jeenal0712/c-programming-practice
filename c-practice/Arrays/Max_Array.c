#include <stdio.h>
int max(int n){
    int arr[n];

    for (int i = 0; i <n; i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    int c=0;

    for (int i = 0; i <n; i++)
    {
        if (arr[i]>c)
        {
            c=arr[i];
        }   
    }
    
    return c;
}
int main(){
    int n;
    printf("enter the number of elements you want in array:");
    scanf("%d",&n);

    int sol=max(n);

    printf("The maxium element of the array is: %d",sol);

    return 0;
}