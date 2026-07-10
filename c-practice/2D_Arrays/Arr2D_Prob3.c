//A matrix 'a' of dimension n*m and 2 coordinates (p,q) and (r,s).Return the sum of reactangle formed from (p,q) to (r,s).
#include <stdio.h>
int main(){
    int n;
    printf("enter the number of rows:");
    scanf("%d",&n);

    int m;
    printf("enter the number of columns:");
    scanf("%d",&m);

    int a[n][m];
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            printf("Enter the element %d of row %d:",j+1,i+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    int p,q;
    printf("enter the first coordinate(p,q):");
    scanf("%d %d",&p,&q);

    int r,s;
    printf("enter the second coordinate(r,s):");
    scanf("%d %d",&r,&s);

    int sum=0;
    printf("The rectangle formed is:\n");
    for (int i = p-1; i <r; i++)
    {
        for (int j = q-1; j <s; j++)
        {
            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }

    printf("The sum of all the elements of rectangle formed is:%d",sum);

    return 0;
}