#include <stdio.h>
int main(){
    /*if n=4 then the output is
    A 
    A B 
    A B C
    A B C D
    If n=2 then output is 
    A 
    A B*/
    int n;
    printf("enter the number of lines you want:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
       for (int j = 65; j <=65+i; j++)
       {
          char ch=(char)j;
          printf("%c ",ch); 
       } 
       printf("\n");
    }
    return 0;
}