// Remove all duplicate characters from a string.
#include <stdio.h>
int main(){
    char s[100];
    printf("Enter the string:");
    scanf("%s",s);

    int size=0;
    while(s[size]!='\0')
    {
        size++;
    }
    
    for (int i = 0; i < size; i++) 
    {
        int duplicate = 0;

        for (int j = 0; j < i; j++) 
        {
            if (s[i] == s[j]) 
            {
                duplicate = 1;
                break;
            }
        }

        if (duplicate == 0) 
        {
            printf("%c", s[i]);
        }
    }

    return 0;
}