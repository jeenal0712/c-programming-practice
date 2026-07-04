/*
Maze Path (Forward Recursion)

Problem:
Count the total number of ways to move from the top-left corner (1,1)
to the bottom-right corner (n,m) of an n × m grid.

Allowed Moves:
→ Right
↓ Down
*/
//way 1:using 4 arguments..
#include <stdio.h>
/*int maze(int cr,int cc,int er,int ec){
    int rways=0;
    int dways=0;

    if (cr==er && cc==ec)
    {
        return 1;
    }
    
    if (cr==er)
    {
        rways+=maze(cr,cc-1,er,ec);
    }

    if (cc==ec)
    {
        dways+=maze(cr-1,cc,er,ec);
    }
    
    if (cr>er && cc>ec)
    {
        dways+=maze(cr-1,cc,er,ec);
        rways+=maze(cr,cc-1,er,ec);
    }
    
    int tways=rways+dways;

    return tways;
}
int main(){

    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);

    int m;
    printf("Enter the number of columns:");
    scanf("%d",&m);

    int ways=maze(n,m,1,1);

    printf("The total number of paths to reach final destination are: %d",ways);

    return 0;
}*/
// way 2:using 2 arguments..
int maze(int n,int m){
    int rways=0;
    int dways=0;
    if (n==1 && m==1)
    {
        return 1;
    }
    
    if (n==1)
    {
        rways+=maze(n,m-1);
    }
    
    if (m==1)
    {
        dways+=maze(n-1,m);
    }
    if (n>1 && m>1)
    {
        rways+=maze(n,m-1);
        dways+=maze(n-1,m);
    }
    
    int tways=rways+dways;

    return tways;
}
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);

    int m;
    printf("Enter the number of columns:");
    scanf("%d",&m);

    int ways=maze(n,m);

    printf("The total number of paths to reach final destination are: %d",ways);

    return 0;
}