//write a function to insert a new character in a string at a given position.
#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    
    int p;
    printf("Enter the index at which character should be inserted:");
    scanf("%d",&p);

    char j;
    printf("Enter the character that have to be inserted:");
    scanf(" %c",&j);

    int l=strlen(str);
    
    for (int i = l+1; i >=p; i--)
    {
        if (i==p)
        {
            str[i]=j;
        }
        else
        {
            str[i]=str[i-1];
        }
    }

    puts(str);
    
    return 0;
} 