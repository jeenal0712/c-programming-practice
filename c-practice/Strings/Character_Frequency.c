//Count frequency of every character.
#include <stdio.h>
int main(){
    char str[100];

    printf("Enter a string:");
    scanf("%[^\n]s", str);

    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    
    for (int i = 0; i < 256; i++)
    {
        if (freq[i]!=0)
        {
            printf("Character: '%c'\n", i);
            printf("Frequency: %d\n\n",freq[i]);
        }
    }

    return 0;
}