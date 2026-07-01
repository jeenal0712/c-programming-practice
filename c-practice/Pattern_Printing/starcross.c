/*for n=5
output:
*   *
 * * 
  *  
 * * 
*   *
*/
#include <stdio.h>
int main(){
    int n;
    printf("enter number of lines:");
    scanf("%d",&n);
    if (n%2!=0)
    {
        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j <=n; j++)
            {
                if (i==j|| i+j==n+1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("this pattern can not be formed");
    }
    return 0;
}