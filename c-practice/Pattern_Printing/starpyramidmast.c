/* for n=5
output:
*********
**** ****
***   ***
**     **
*       *
*/
#include <stdio.h>
int main(){
    int n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n-i ; j++)
        {
            printf("*");
        }
        if (i!=0)
        {
            for (int j = 1; j <=(2*i)-1 ; j++)
            {
                printf(" ");
            }  
        }
        if (i!=0)
        {
            for (int j = 1; j <=(n-i); j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 0; j < n-1; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}