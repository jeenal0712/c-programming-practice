/*
Maze Path

Find the total number of ways to reach the bottom-right corner of an
n × m grid from the top-left corner.

Allowed moves:
→ Right
↓ Down
*/
#include <stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rways=0;
    int dways=0;

    if (cr==er && cc==ec)
    {
        return 1;
    }
    
    if (cr==er)
    {
        rways+=maze(cr,cc+1,er,ec);
    }

    if (cc==ec)
    {
        dways+=maze(cr+1,cc,er,ec);
    }
    
    if (cr<er && cc<ec)
    {
        dways+=maze(cr+1,cc,er,ec);
        rways+=maze(cr,cc+1,er,ec);
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

    int ways=maze(1,1,n,m);

    printf("The total number of paths to reach final destination are: %d",ways);

    return 0;
}