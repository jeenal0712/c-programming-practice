/*for n=5
output:
    AB
   ABC
  ABCD
 ABCDE
ABCDEF
*/
#include <stdio.h>
int main(){
    int n;
    printf("enter the number of lines:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j<=1; j++)
        {
            for (int k = 65; k <=65+i; k++)
            {
                char ch=(char)k;
                printf("%c",ch);
            }
        }
        printf("\n");
    }
    return 0;
}