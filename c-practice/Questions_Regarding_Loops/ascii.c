#include <stdio.h>
int main(){
    /*we have to print ascii value of all alphabets.
    A 65
    B 66
    C 67
    .
    .
    .
    .
    .
    Z 90*/
    // WE WILL USE TYPECASTING.
    for (int i = 65; i <=90; i++)
    {
        char ch=(char)i;
        printf("%c ",ch);
        printf("%d\n",i);
    }
    return 0;
}