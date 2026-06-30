#include <stdio.h>
int main(){
    int n;
    printf("enter the number of lines:");
    scanf("%d",&n);
    for (int k = 1; k<=n; k++)
    {
       if (n%2==0)
        {
           printf("pattern can not be formed.");
           break;
        }
       else
        {
           int m=(n+1)/2;
           if (k==m)
            {
              for (int i = 0; i < n; i++)
               {
                 printf("*");
               }
            }
           else 
            {
              for (int j = 1; j<=n; j++)
               {
                 if (j==m)
                  {
                     printf("*");
                  }
                 else
                  {
                     printf(" ");
                  }
               }
            
            }
        
        }
        printf("\n");
    }
    return 0;
}