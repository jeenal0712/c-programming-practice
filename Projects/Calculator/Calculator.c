#include <stdio.h>
float add(float a,float b);
float subtract(float a,float b);
float multiply(float a,float b);
float divide(float a,float b);
int main(){
    int choice;
    while(1)
    {
        printf("\n===== CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        float o1;
        float o2;

        if (choice == 5) 
        {
            return 0;
        }

        if (choice < 1 || choice > 5) 
        {
            printf("Invalid choice!\n");
            continue;
        }

        printf("Enter the first operand:");
        scanf("%f",&o1);
        printf("Enter the second operand:");
        scanf("%f",&o2);

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
        printf("Division by 0 not valid!");
        return 0;
    }
    return a/b;
}