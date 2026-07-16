//write a program to take n number of intgers as input and display them.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter the number of integer u want:");
    scanf("%d",&n);

    int* ptr=(int*)calloc(n,sizeof(int));
    int* p=ptr;
    for (int i = 1; i <=n; i++)
    {
        scanf("%d",&(*ptr));
        ptr++;
    }
    
    printf("\nIntegers are:\n");
    for (int i = 0; i <n; i++)
    {
        printf("%d\n",*p);
        *p++;
    }
    
    return 0;
}