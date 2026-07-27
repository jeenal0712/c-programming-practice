// Find the first repeating character.
#include <stdio.h>
int main(){
    char str[100];

    printf("Enter a string:");
    scanf("%[^\n]s", str);

    int freq[256] = {0};

    int found=0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
        if (freq[str[i]]>1 && str[i]!=' ')
        {
            printf("The first repeating character is:%c",str[i]);
            found=1;
            break;
        }
    }

    if (found==0)
    {
        printf("No repeating character found.");
    }
    
    return 0;
}