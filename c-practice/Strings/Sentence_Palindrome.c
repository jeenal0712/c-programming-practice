//Check if a sentence is a palindrome ignoring spaces.
#include <stdio.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    int size=0;
    while (str[size]!='\0')
    {
        size++;
    }
    
    int flag=0;
    int i=0;
    int j=size-1;

    while (i<j)
    {
        if (str[j]==' ' || str[i]==' ')
        {
            if (str[j]==' ')
            {
                j--;
            }
            else
            {
                i++;
            }
            continue;
        }
        if (str[i]!=str[j])
        {
            flag=1;
            break;
        }
        i++;
        j--;   
    }
    
    if (flag!=1)
    {
        printf("This sentence is a palindrome.");
    }
    else
    {
        printf("This sentence is not a palindrome.");
    }
    return 0;
}