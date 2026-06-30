#include <stdio.h>
int main(){
    /*if n=4 then the output is
    1
    A B 
    1 2 3
    A B C D
    If n=2 then output is 
    1
    A B*/
    int n;
    printf("enter the number of lines you want:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
      if (i%2==0)
        { 
            for (int j = 65; j <65+i; j++)
           {
             char ch=(char)j;
             printf("%c ",ch);
           }
        }
     else
        { 
           for (int k = 1; k <=i; k++)
            {
              printf("%d ",k);   
            } 
        }    
       printf("\n");
    }
    return 0;
}