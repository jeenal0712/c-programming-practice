// Implement your own strcpy().
#include <stdio.h>
void strcopy(char a[],char b[]){
    char* p=a;
    char* q=b;
    char c;
    while (*q!='\0')
    {
        c=*q;
        *p=c;
        q++;
        p++;
    }
    *p='\0';
}
int main(){
    char str1[100];
    printf("enter the string:");
    scanf("%[^\n]s",str1);

    char str2[100];
    
    strcopy(str2,str1);
    
    printf("The copied string is:\n");

    int i=0;
    while (str2[i]!='\0')
    {
        printf("%c",str2[i]);
        i++;
    }
    
    return 0;
}