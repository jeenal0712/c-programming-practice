#include <stdio.h>
int main (){
    // we have to print odd numbers till hundred
    /*for (int i = 1; i <=100; i++)
    {
        if (i%2!=0)
        {
            printf("%d ",i);
        } 
    }*/
    
    // now with continue statement
    for (int i = 1; i <=100; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}