/*for n=5
output:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
#include <stdio.h>
int factorial(int a){
    int f=1;
    for (int i = 1; i <=a; i++)
    {
        f=f*i;
    }
    return f;
}
int combination(int n, int r){
    int c;
    c=factorial(n)/(factorial(r)*factorial(n-r));
    return c;
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",combination(i,j));
        }
        printf("\n");
    }
    return 0;
}