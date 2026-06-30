#include <stdio.h>
int main(){
    // print the table of 19
    printf("the table of 19\n");
    for (int i = 1; i < 11; i++)
    {
        int n=19*i;
        printf("%d\n",n);
    }
    return 0;
}