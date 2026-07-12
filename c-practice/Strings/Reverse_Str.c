// Reverse a string entered by user and print it.
#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    printf("enter the string:");
    scanf("%[^\n]s",str);
    int c=0;
    int j=0;
    while (str[j]!='\0')
    {
        c=c+1;
        j=j+1;
    }
    
    for (int i =c-1; i >=0; i--)
    {
        printf("%c",str[i]);
    }
    
    return 0;
}