//Check if two strings are anagrams (without library functions).
#include <stdio.h>

int main(){

    char s1[100];
    printf("Enter the string 1: ");
    scanf("%s", s1);

    char s2[100];
    printf("Enter the string 2: ");
    scanf("%s", s2);

    int size1=0;
    while(s1[size1]!='\0')
    {
        size1++;
    }

    int size2=0;
    while(s2[size2]!='\0')
    {
        size2++;
    }

    int count1[256]={0};
    int count2[256]={0};

    if(size1==size2)
    {
        for(int i=0;i<size1;i++)
        {
            count1[s1[i]]++;
        }

        for(int i=0;i<size2;i++)
        {
            count2[s2[i]]++;
        }

        int flag=1;

        for(int i=0;i<256;i++)
        {
            if(count1[i]!=count2[i])
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
        {
            printf("These strings are anagrams.");
        }
        else
        {
            printf("These strings are not anagrams.");
        }
    }
    else
    {
        printf("These strings are not anagrams.");
    }

    return 0;
}