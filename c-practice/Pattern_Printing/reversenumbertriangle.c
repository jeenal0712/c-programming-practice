/* for n=5
output:
12345
1234
123
12
1
*/
#include <stdio.h>
int main(){
    int n;
    printf("enter the number of lines:");
    scanf("%d",&n);
    for (int i = n; i >=1; i=i-1)
    {
        int a=1;
        while (a!=0)
        {
            for (int j = 1; j <=i; j++)
            {
                printf("%d",j);
            }
            a=a-1;
        }
        printf("\n");
    }
    return 0;
}