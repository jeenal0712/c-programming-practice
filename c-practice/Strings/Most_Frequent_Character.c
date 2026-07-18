// Find the most frequent character in a string
#include <stdio.h>
int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }

    int max = 0;
    char ans;
    
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            ans = i;
        }
    }

    printf("Most frequent character: %c\n", ans);
    printf("Frequency: %d", max);

    return 0;
}