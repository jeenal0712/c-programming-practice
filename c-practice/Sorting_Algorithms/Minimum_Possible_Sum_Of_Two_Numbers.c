//Question:
//Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of two numbers formed from the digits of the array.
//Note:
//All digits of the given array must be used to form the two numbers.
#include <stdio.h>

int main() {
    int n;
    printf("enter the total number of elements you want in array:");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i <n; i++)
    {
        printf("enter the %d element of array:",i+1);
        scanf("%d",&arr[i]);
    }
    
    // Step 1: Sort the array in ascending order 
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("Sorted digits: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Step 2: Build two numbers by giving digits alternately
    int num1 = 0, num2 = 0;
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) 
        {
            num1 = num1 * 10 + arr[i];  
        } 
        else 
        {
            num2 = num2 * 10 + arr[i];  
        }
    }
    
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);
    printf("Minimum sum = %d\n", num1 + num2);
    
    return 0;
}