/*
 for n=5 and d=5
output:
12345
12345
12345
12345
12345
*/
#include <stdio.h>
int main(){
    int n;
    int d;
    printf("enter number of lines:");
    scanf("%d",&n);
    printf("enter the number of digits u want:");
    scanf("%d",&d);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <=d; j++)
        {
            printf("%d",j);
        
        printf("\n");
    }
    return 0;
}