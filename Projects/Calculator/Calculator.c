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
float logarithm(float a);
float logarithm10(float a);
void saveHistory(char operation[], float a, float b, float result);
void saveSingleHistory(char operation[], float a, float result);
void saveIntegerHistory(char operation[], int a, int b, int result);
void displayHistory();
void clearHistory();
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
        printf("15. Natural Log (ln)\n");
        printf("16. Log Base 10\n");
        printf("17. Display History\n");
        printf("18. Clear History\n");
        printf("19. Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        float o1;
        float o2;
        int o3;
        int o4;
        float result;
        int iresult;

        if (choice == 19) 
        {
            return 0;
        }

        if (choice < 1 || choice > 19) 
        {
            printf("Invalid choice!\n");
            continue;
        }

        if (choice!=7 && choice!=8 && choice!=9 && choice!=10 && choice!=11 && choice!=12 && choice!=13 && choice!=14 && choice!=15 && choice!=16 && choice!=17 && choice!=18)
        {
            printf("Enter the first operand:");
            scanf("%f",&o1);
            printf("Enter the second operand:");
            scanf("%f",&o2);
        }

        if (choice==7 || choice==8 || choice==9 || choice==12 || choice==13 || choice==14 || choice==15 || choice==16)
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
            result=add(o1,o2);
            printf("The solution is:%.2f",result);
            saveHistory("+", o1, o2, result);
            break;
        
        case 2:
            result=subtract(o1,o2);
            printf("The solution is:%.2f",result);
            saveHistory("-", o1, o2, result);
            break;

        case 3:
            result= multiply(o1,o2);
            printf("The solution is:%.2f",result);
            saveHistory("*", o1, o2, result);
            break;

        case 4:
            result= divide(o1,o2);
            printf("The solution is:%.2f",result);
            saveHistory("/", o1, o2, result);
            break;
        
        case 5:
            result= modulus(o1,o2);
            printf("The solution is: %.2f", result);
            saveHistory("%", o1, o2, result);
            break;
    
        case 6:
            result= power(o1,o2);
            printf("The solution is: %.2f",result);
            saveHistory("^", o1, o2, result);
            break;

        case 7:
            result= squareroot(o1);
            printf("The solution is: %.2f",result);
            saveSingleHistory("sqrt", o1, result);
            break;

        case 8:
            result= absolute(o1);
            printf("The solution is: %.2f",result);
            saveSingleHistory("abs", o1, result);
            break;

        case 9:
            result= factorial(o1);
            printf("The solution is: %.2f",result);
            saveSingleHistory("!", o1, result);
            break;

        case 10:
            iresult=gcd(o3,o4);
            printf("The solution is: %d",iresult);
            saveIntegerHistory("GCD", o3, o4,iresult);
            break;

        case 11:
            iresult=lcm(o3,o4);
            printf("The solution is: %d",iresult);
            saveIntegerHistory("LCM", o3, o4,iresult);
            break;

        case 12:
            result=sine(o1);
            printf("The solution is: %.2f",result);
            saveSingleHistory("sin", o1, result);
            break;

        case 13:
            result=cosine(o1);
            printf("The solution is: %.2f",cosine(o1));
            saveSingleHistory("cos", o1, result);
            break;

        case 14:
            result=tangent(o1);
            printf("The solution is: %.2f",tangent(o1));
            saveSingleHistory("tan", o1, result);
            break;

        case 15:
            result=logarithm(o1);
            printf("The solution is: %.2f",logarithm(o1));
            saveSingleHistory("ln", o1, result);
            break;
        
        case 16:
            result=logarithm10(o1);
            printf("The solution is: %.2f",logarithm10(o1));
            saveSingleHistory("log10", o1, result);
            break;

        case 17:
            displayHistory();
            break;

        case 18:
            clearHistory();
            break;

        case 19:
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
float absolute(float a){
    return fabs(a);
}
float factorial(float a){
    if (a < 0)
    {
        printf("Factorial of a negative number is invalid!\n");
        return 0;
    }

    if (a != (int)a)
    {
        printf("Factorial is only valid for whole numbers!\n");
        return 0;
    }

    float sol = 1;

    for (float i = 1; i <= a; i++)
    {
        sol = sol * i;
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
    if (a == 0 || b == 0)
    {
        return 0;
    }
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
float logarithm(float a) {
    if (a <= 0) 
    {
        printf("Logarithm is only defined for positive numbers!\n");
        return 0;
    }
    return log(a);
}
float logarithm10(float a) {
    if (a <= 0) 
    {
        printf("Logarithm is only defined for positive numbers!\n");
        return 0;
    }
    return log10(a);
}
void saveHistory(char operation[], float a, float b, float result) {
    FILE *file = fopen("history.txt", "a");

    if (file == NULL) {
        printf("Error opening history file!\n");
        return;
    }

    fprintf(file, "%.2f %s %.2f = %.2f\n",a, operation, b, result);

    fclose(file);
}
void saveSingleHistory(char operation[], float a, float result){
    FILE *file = fopen("history.txt", "a");

    if (file == NULL) {
        printf("Error opening history file!\n");
        return;
    }

    if (operation[0] == '!')
    {
        fprintf(file, "%.2f! = %.2f\n", a, result);
    }
    else
    {
        fprintf(file, "%s(%.2f) = %.2f\n", operation, a, result);
    }

    fclose(file);
}
void saveIntegerHistory(char operation[], int a, int b, int result){
    FILE *file = fopen("history.txt", "a");

    if (file == NULL) {
        printf("Error opening history file!\n");
        return;
    }

    fprintf(file, "%s(%d,%d) = %d\n", operation, a,b, result);

    fclose(file);
}
void displayHistory() {
    FILE *file = fopen("history.txt", "r");

    if (file == NULL) {
        printf("No history found!\n");
        return;
    }

    char line[200];

    printf("\n===== CALCULATION HISTORY =====\n");

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
}
void clearHistory() {
    FILE *file = fopen("history.txt", "w");

    if (file == NULL) {
        printf("Error clearing history!\n");
        return;
    }

    fclose(file);

    printf("History cleared successfully!\n");
}