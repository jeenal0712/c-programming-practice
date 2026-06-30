#include <stdio.h>
int main(){
    int n;
    int s;
    printf("enter the numbers of lines you want:");
    scanf("%d",&n);
    printf("enter the number of stars in each line:");
    scanf("%d",&s);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}