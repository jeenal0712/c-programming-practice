#include <stdio.h>
int main(){
    int x,y;
    printf("enter x coordinate;");
    scanf("%d",&x);
    printf("enter y corrdinate:");
    scanf("%d",&y);
    if (x==0 && y!=0)
    {
        printf("point lies on y-axix");
    }
    else if (x!=0 && y==0)
    {
        printf("point lies on x-axis");
    }
    else if (x==0 && y==0)
    {
        printf("point lies on the origin");
    }
    else{
        printf("point doesn't lies on x or y axis");
    }
    return 0;
}