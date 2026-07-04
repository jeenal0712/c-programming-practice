/*
Tower of Hanoi

Problem:
Move all n disks from the Source rod (A) to the Destination rod (C)
using the Helper rod (B).

Rules:
1. Move only one disk at a time.
2. A larger disk cannot be placed on a smaller disk.
3. Use the helper rod whenever required.
*/
#include <stdio.h>
void tower(int n,char s,char h,char d){
    if (n==0) return;
    
    tower(n-1,s,d,h);
    printf("%c->%c\n",s,d);
    tower(n-1,h,s,d);
    return;
}
int main(){
    int n;
    printf("enter the number of disks:");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}