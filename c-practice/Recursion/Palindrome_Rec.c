//Check palindrome recursively.
#include <stdio.h>
#include <string.h>
int palindrome(char str[],int i,int j){
    if (i >= j)
    {
        return 0;
    }
    if (str[i] == str[j])
    {
        return palindrome(str, i + 1, j - 1);
    }
    else
    {
        return 1;
    }
}
int main(){
    char str[50];
    printf("Enter the string:");
    scanf("%[^\n]",str);
    int c=palindrome(str,0,strlen(str)-1);
    if (c==0)
    {
        printf("Yes! this is a palindrome.");
    }
    else
    {
        printf("No! this is not a palindrome.");
    }
    return 0;
}