//Implement your own strlen().
#include <stdio.h>
int strlength(char a[]){
    char* p=a;
    int size=0;

    while (*p!='\0')
    {
        size++;
        p++;
    }
    
    return size;
}
int main(){
    char str[100];
    printf("enter the string:");
    scanf("%[^\n]s",str);

    printf("The size of string is:%d",strlength(str));

    return 0;
}