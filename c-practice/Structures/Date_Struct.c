//Create a structure Date that contains three members: date, month, and year. Create two structure variables with different dates and compare them. If the dates are equal, display the message "Equal"; otherwise, display "Unequal".
#include <stdio.h>
int main(){
    typedef struct date
    {
        int d;
        int month;
        int year;
    }date;
    
    date s[2];

    for (int i = 0; i < 2; i++) {
        printf("Enter the %d set of Date, Month and Year:\n", i + 1);
        scanf("%d %d %d", &s[i].d, &s[i].month, &s[i].year);
    }
    int flag=0;
    for (int i = 0; i <1; i++)
    {
        if (s[i].d!=s[i+1].d)
        {
            flag=1;
            break;
        }
        if (s[i].month!=s[i+1].month)
        {
            flag=1;
            break;
        }
        if (s[i].year!=s[i+1].year)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("\nEqual");
    }
    else
    {
        printf("\nUnequal");
    }
    
    return 0;
}