#include <stdio.h>
int main(){
    int r;
    printf("Enter the number of students:");
    scanf("%d",&r);

    char n[r][20];  
    for (int i = 0; i < r; i++) 
    {
        printf("Enter the name of student %d:", i+1);
        scanf("%s", n[i]);   
    }

    int m[r][3];
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j==0)
            {
                printf("Enter the marks of physics of student %d:",i+1);
                scanf("%d",&m[i][j]);
            }
            if (j==1)
            {
                printf("Enter the marks of maths of student %d:",i+1);
                scanf("%d",&m[i][j]);
            }
            if (j==2)
            {
                printf("Enter the marks of chemistry of student %d:",i+1);
                scanf("%d",&m[i][j]);
            }
        }  
    }

    printf("The marks record is:\n");

    for (int i = 0; i < r; i++)
    {
       printf("%s: ", n[i]);         
       for (int j = 0; j < 3; j++)
        {
           printf("%d ", m[i][j]);   
        }
       printf("\n");
    }
    
    return 0;
}