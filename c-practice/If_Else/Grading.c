#include <stdio.h>
int main(){
    float n;
    printf("enter your percentage :");
    scanf("%f",&n);
    if (n>90.00 && n<100.00)
    {
        printf("grade A");
    }
    else if(n>80.00){
        printf("grade B");
    }
    else if (n>70.00)
    {
        printf("grade C");
    }
    else if (n>60.00)
    {
        printf("grade D");
    }
    else if (n>50.00)
    {
        printf("grade E");
    }
    else{
        printf("fail");
    }
    return 0;
}