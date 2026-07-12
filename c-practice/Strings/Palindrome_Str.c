// write a program to identify if the given string ia a palindrome or not.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, p = 1;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            p = 0;
            break;
        }
    }

    if (p!=0)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");

    return 0;
}