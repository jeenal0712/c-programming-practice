//Compress a string (aaabbcc -> a3b2c2).
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
    
    int count=1;
    for (int i = 0; i <size-1; i++)
    {
        if (s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            printf("%c%d",s[i],count);
            count=1;
        }
    }
    
    printf("%c%d",s[size - 1],count);
    
    return 0;
}