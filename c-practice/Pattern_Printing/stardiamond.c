/*for n=5
output:
  *
 ***
*****
 ***
  *
*/
#include <stdio.h>
int main(){
    int n;
    printf("enter the number of lines:");
    scanf("%d",&n);
    if (n%2!=0)
    {
        for (int i = 1; i <=n; i++)
        {
            int m=(n+1)/2;
            if (i<=m)
            {
                for (int j = 1; j <=m-i; j++)
                {
                    printf(" ");
                }
                for ( int j = 1; j <2*i; j++)
                {
                    printf("*");
                }
            }
            else
            {
                for (int j = 1; j <=i-m; j++)
                {
                    printf(" ");
                }
                for (int j = 1; j <=2*(n-i)+1; j++)
                {
                    printf("*");  
                }
                
            }
            printf("\n");   
        }
    }
    else
    {
        printf("this pattern can not be printed.");
    }
    return 0;
}