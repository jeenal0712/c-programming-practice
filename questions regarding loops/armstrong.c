#include <stdio.h>
int main(){
    /*armstrong number are those if sum of cubes of each digit of the number is equal to the number itself.
    if 153=(1*1*1)+(5*5*5)+(3*3*3) then it is a armstrong number.*/
    for (int i = 1; i <=500; i++)
    {   int sum=0;
        int a=i;
        while (a!=0)
        {
            int b=a%10;
            sum=sum+(b*b*b);
            a=a/10;  
        }
        if (sum==i)
        {
           printf("%d ",i); 
        }
    }
    printf("the end");
    return 0;
}