#include <stdio.h>
#include <string.h>
int main(){
    struct books
    {
        char author[100];
        char name[50];
        int pages;
        float price;
    }a,b,c;
    
    strcpy(a.author,"H.D Carlton");
    strcpy(a.name,"Haunting Adeline");
    a.pages=629;
    a.price=249.00;
    
    strcpy(b.author,"H.D Carlton");
    strcpy(b.name,"Hunting Adeline");
    b.pages=700;
    b.price=350.00;

    strcpy(c.author,"H.D Carlton");
    strcpy(c.name,"Where's Molly");
    c.pages=242;
    c.price=399.00;

    printf("First Book:\n");
    printf("Name:%s\n",a.name);
    printf("Author:%s\n",a.author);
    printf("Total Pages:%d\n",a.pages);
    printf("Price:%.2f\n",a.price);
    printf("\n");

    printf("Second Book:\n");
    printf("Name:%s\n",b.name);
    printf("Author:%s\n",b.author);
    printf("Total Pages:%d\n",b.pages);
    printf("Price:%.2f\n",b.price);
    printf("\n");

    printf("Third Book:\n");
    printf("Name:%s\n",c.name);
    printf("Author:%s\n",c.author);
    printf("Total Pages:%d\n",c.pages);
    printf("Price:%.2f\n",c.price);
    printf("\n");

    return 0;
}