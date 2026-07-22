#include <stdio.h>
#include <math.h>
float add(float a,float b);
float subtract(float a,float b);
float multiply(float a,float b);
float divide(float a,float b);
float modulus(float a,float b);
float power(float a, float b);
float squareroot(float a);
int main(){
    int choice;
    while(1)
    {
        printf("\n===== CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Square Root\n");
        printf("8. Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        float o1;
        float o2;

        if (choice == 8) 
        {
            return 0;
        }

        if (choice < 1 || choice > 8) 
        {
            printf("Invalid choice!\n");
            continue;
        }

        if (choice!=7)
        {
            printf("Enter the first operand:");
            scanf("%f",&o1);
            printf("Enter the second operand:");
            scanf("%f",&o2);
        }

        if (choice==7)
        {
            printf("Enter the operand:");
            scanf("%f",&o1);
        }
        
        switch (choice)
        {
        case 1:
            printf("The solution is:%.2f",add(o1,o2));
            break;
        
        case 2:
            printf("The solution is:%.2f",subtract(o1,o2));
            break;

        case 3:
            printf("The solution is:%.2f",multiply(o1,o2));
            break;

        case 4:
            printf("The solution is:%.2f",divide(o1,o2));
            break;
        
        case 5:
            printf("The solution is: %.2f", modulus(o1,o2));
            break;
    
        case 6:
            printf("The solution is: %.2f", power(o1,o2));
            break;

        case 7:
            printf("The solution is: %.2f",squareroot(o1));
            break;

        case 8:
            return 0;

        default:
            printf("Invalid choice!");
        }
    }

    return 0;
}
float add(float a,float b){
    return a+b;
}
float subtract(float a,float b){
    return a-b;
}
float multiply(float a,float b){
    return a*b;
}
float divide(float a,float b){
    if (b==0)
    {
        printf("Division by 0 not valid!\n");
        return 0;
    }
    return a/b;
}
float modulus(float a,float b){
    if (b == 0) 
    {
        printf("Modulus by zero is not valid!\n");
        return 0;
    }
    return fmod(a, b);
}
float power(float a, float b){
    return pow(a,b);
}
float squareroot(float a){
    if (a<0)
    {
        printf("Square root of a negative number is invalid!\n");
        return 0;
    }
    return sqrt(a);
}