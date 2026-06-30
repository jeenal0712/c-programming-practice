#include <stdio.h>
int main(){
    float cp,sp,loss,profit;
    printf("enter the cost price:");
    scanf("%f",&cp);
    printf("enter the selling price:");
    scanf("%f",&sp);
    if (sp>cp)
    {
        profit=sp-cp;
        printf("u have gained profit of %f rupees.",profit);
    }
    else if (cp>sp)
    {
        loss=cp-sp;
        printf("u have a loss of %f rupees.",loss);
    }
    else 
    {
        printf("u have neither loss nor profited.");
    }
    
    return 0;

}