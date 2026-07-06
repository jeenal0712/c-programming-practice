//In an array find out if number "x" lies or not if yes print the index.
//warning: do not give repeated value as it counts first index only.
#include <stdio.h>
int find(int arr[],int n,int x){
    int ind;
    for (int i = 0; i <n; i++)
    {
        if (arr[i]==x)
        {
            ind=i;
            return ind;
        }
        else
        {
            ind=-1;
            continue;
        }
    }
    
    return ind;
}
int main(){
    int n;
    printf("Enter the number of elements you want in array:");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i <n; i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    int x;
    printf("Enter the number which you want to find:");
    scanf("%d",&x);

    int b=find(arr,n,x);

    if (b==-1)
    {
        printf("%d is not present.",x);
    }
    else
    {
        printf("%d is at index %d",x,b);
    }
    
    return 0;
}