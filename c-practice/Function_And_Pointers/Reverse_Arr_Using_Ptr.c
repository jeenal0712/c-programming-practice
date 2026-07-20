//Reverse an array using pointers only.
#include <stdio.h>
void reverse(int a[],int n){
    int *p = a;
    int *q = a + n - 1;

    while (p < q)
    {
        int temp = *p;
        *p = *q;
        *q = temp;

        p++;
        q--;
    }

    printf("The reversed array is:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
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

    reverse(arr,n);

    return 0;
}