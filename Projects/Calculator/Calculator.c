#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
float add(float a,float b);
float subtract(float a,float b);
float multiply(float a,float b);
float divide(float a,float b);
float modulus(float a,float b);
float power(float a, float b);
float squareroot(float a);
float absolute(float a);
float factorial(float a);
int gcd(int a, int b);
int lcm(int a, int b);
float sine(float a);
float cosine(float a);
float tangent(float a);
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
        printf("8. Absolute Value\n");
        printf("9. Factorial\n");
        printf("10. GCD\n");
        printf("11. LCM\n");
        printf("12. Sin()\n");
        printf("13. Cos()\n");
        printf("14. Tan()\n");
        printf("15. Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        float o1;
        float o2;
        int o3;
        int o4;

        if (choice == 15) 
        {
            return 0;
        }

        if (choice < 1 || choice > 15) 
        {
            printf("Invalid choice!\n");
            continue;
        }

        if (choice!=7 && choice!=8 && choice!=9 && choice!=10 && choice!=11 && choice!=12 && choice!=13 && choice!=14)
        {
            printf("Enter the first operand:");
            scanf("%f",&o1);
            printf("Enter the second operand:");
            scanf("%f",&o2);
        }

        if (choice==7 || choice==8 || choice==9 || choice==12 || choice==13 || choice==14)
        {
            printf("Enter the operand:");
            scanf("%f",&o1);
        }
        
        if (choice==10 || choice==11)
        {
            printf("Enter the first operand:");
            scanf("%d",&o3);
            printf("Enter the second operand:");
            scanf("%d",&o4);
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
            printf("The solution is: %.2f",absolute(o1));
            break;

        case 9:
            printf("The solution is: %.2f",factorial(o1));
            break;

        case 10:
            printf("The soulution is: %d",gcd(o3,o4));
            break;

        case 11:
            printf("The solution is: %d",lcm(o3,o4));
            break;

        case 12:
            printf("The solution is: %.2f",sine(o1));
            break;

        case 13:
            printf("The solution is: %.2f",cosine(o1));
            break;

        case 14:
            printf("The solution is: %.2f",tangent(o1));
            break;

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
float absolute(float a){
    return fabs(a);
}
float factorial(float a){
    if (a<0)
    {
        printf("Factorial of a negative number is invalid!\n");
        return 0;
    }

    if (a != (int)a) 
    {
        printf("Factorial is only valid for whole numbers!\n");
        return 0;
    }

    float sol=1;

    for (float i = 1; i <=a; i++)
    {
        sol=sol*i;
    }

    return sol;
}
int gcd(int a, int b){
    while (b != 0) 
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
float sine(float angle) {
    return sin((angle * PI) / 180);
}

float cosine(float angle) {
    return cos((angle * PI) / 180);
}

float tangent(float angle) {
    return tan((angle * PI) / 180);
}