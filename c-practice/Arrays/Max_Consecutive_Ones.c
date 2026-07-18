//Find the maximum consecutive 1s in a binary array.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements you want in array:");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i <n; i++)
    {
        printf("Enter the element %d(only 0 and 1):",i+1);
        scanf("%d",&a[i]);
    }

    int seq=0;
    int mseq=0;
    for (int i = 0; i <n; i++)
    {
        if (a[i]==1)
        {
            seq++;
            if (seq>mseq)
            {
                mseq=seq;
            } 
        }
        else
        {
            seq=0;
        }
    }

    printf("\nThe maximum consecutive 1's in the array are:%d",mseq);

    return 0;
}