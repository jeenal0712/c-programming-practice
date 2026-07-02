#include <stdio.h>
void swap(int* A, int* B){
    // Swapping the numbers using a temporary variable 
    /*
    int t;
    t = A;
    A = B;
    B = t;
    printf("After swapping: A = %d, B = %d\n", A, B);
    */
    // Swapping the numbers without using a temporary variable
    /*
    A = A+B;
    B=A-B;
    A=A-B;
    printf("After swapping: A = %d, B = %d\n", A, B);
    */
    // now swappping the numbers using pointers
    *A=*A+*B;
    *B=*A-*B;
    *A=*A-*B;
}
int main(){
    int a;
    printf("Enter the first number: ");
    scanf("%d",&a);
    int* A = &a;

    int b;
    printf("Enter the second number: ");
    scanf("%d",&b);
    int* B = &b;

    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(A,B);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}