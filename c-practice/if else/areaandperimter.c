#include <stdio.h>
int main(){
    float l,b,area,peri;
    printf("enter the length:");
    scanf("%f",&l);
    printf("enter the breath:");
    scanf("%f",&b);
    area=l*b;
    peri=2*(l+b);
    if(area>peri)
    {
        printf("the area is greater than perimeter");
    }
    else 
    {
        printf("the perimeter is greater than area.");
    }
    return 0;
}