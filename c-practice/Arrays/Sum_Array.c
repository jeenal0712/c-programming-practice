#include <stdio.h>
int sum(int n){
    int s=0;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    return s;
}
int main(){
    int n;
    printf("enter the number of elements you want in array:");
    scanf("%d",&n);
    int sol=sum(n);
    printf("The sum of all the elements is: %d",sol);
    return 0;
}