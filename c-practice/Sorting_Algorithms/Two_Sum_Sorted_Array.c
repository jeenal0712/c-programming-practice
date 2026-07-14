//2-Pointers Algorithm
//Ques: Given an array of integers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number.
#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,6,7,9};
    int target=3;
    int i=0;
    int j=6;
    while(i<j)
    {
        if (arr[i]+arr[j]==target)
        {
            printf("%d and %d are the two numbers which are equal to %d",arr[i],arr[j],target);
            break;
        }
        else if (arr[i]+arr[j]>target)
        {
            j--;
        }
        else 
        {
            i++;
        }
    }
    return 0;
}