// Write a program to create a calculator that performs basic arithmetic operations (addition, subtraction, multiplication, and division) using switch case and functions.
#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int substract(int a,int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}
int divide(int a,int b){
    if(b==0){
        printf("Division by zero is not possible.\n");
        return 0;
    }
    return a/b;
}
int main(){
    int n;
    printf("Enter the first number:");
    scanf("%d",&n);

    int m;
    printf("Enter the second number:");
    scanf("%d",&m);

    char op;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    int s=0;
    switch (op)
    {
    case '+':
        s=add(n,m);
        printf("Your solution is:%d",s);
        break;
    
    case '-':
        s=substract(n,m);
        printf("Your solution is:%d",s);
        break;
    case '*':
        s=multiply(n,m);
        printf("Your solution is:%d",s);
        break;
    case '/':
        s=divide(n,m);
        printf("Your solution is:%d",s);
        break;
    default:
        printf("invalid operator");
        break;
    }

    return 0;
}