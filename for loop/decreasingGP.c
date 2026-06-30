#include <stdio.h>
int main(){
    // we have to print a gp like 100,50,25,......upto n terms
    int n;
    printf("enter the no.of terms u want:");
    scanf("%d",&n);
    float a=100;
    for (int i = 0; i <=n; i++)
    {
        printf("%f ",a);
        a=a*0.5;
    }
    return 0;
}