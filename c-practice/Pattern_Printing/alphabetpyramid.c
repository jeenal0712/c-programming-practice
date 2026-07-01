/* for n=5
output:
    AB
   ABCD
  ABCDEF
 ABCDEFGH
ABCDEFGHIJ
*/
#include <stdio.h>
int main(){
    int n;
    printf("enter the number of lines:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <n-i; j++)
        {
            printf(" ");
        }
        for ( int j = 65; j <65+2*i; j++)
        {
            char ch=(char)j;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}