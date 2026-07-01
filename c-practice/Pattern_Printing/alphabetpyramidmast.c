/* for n=5
output:
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
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
        for ( int j = 65; j <65+i; j++)
        {
            char ch=(char)j;
            printf("%c",ch);
        }
        if (i>1)
        {
            for (int j =65+i-2; j >=65; j--)
            {
                char ch1=(char)j;
                printf("%c",ch1);
            }
        }
        printf("\n");
    }
    return 0;
}