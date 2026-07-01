#include <stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3,m1,m2;
    printf("enter first x coordinate:");
    scanf("%d",&x1);
    printf("enter second x coordinate:");
    scanf("%d",&x2);
    printf("enter third x coordinate:");
    scanf("%d",&x3);
    printf("enter first y coordinate:");
    scanf("%d",&y1); 
    printf("enter second y coordinate:");
    scanf("%d",&y2);
    printf("enter third y coordinate:");
    scanf("%d",&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if (m1==m2)
    {
        printf("the points lie on the same line");
    }
    else{
        printf("the points doesn't lie on same line");
    }
    return 0;
}