#include <stdio.h>
void fibonacci(int n){
    int a=0;
    int b=1;
    int sum=0;
    for (int i = 1; i <=n; i++)
    {
       printf("%d ",a);
       sum=a+b;
       a=b;
       b=sum; 
    }
}
int main(){
    int x;
    printf("enter the number of terms you want:");
    scanf("%d",&x);
    fibonacci(x);
    return 0;
}