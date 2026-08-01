//Find topper and average marks
#include <stdio.h>
typedef struct Student {
    int roll;
    char name[50];
    float marks;
}std;

int main() {
    int n;
    printf("Enter the number students you want to store record of:");
    scanf("%d",&n);
    std s[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Roll, Name and Marks of Student %d:\n", i + 1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    float sum=0;

    for (int i = 0; i <n; i++)
    {
        sum=sum+s[i].marks;
    }
    
    float avg=sum/n;

    printf("Average marks:%.2f\n",avg);

    float max=s[0].marks;

    for (int i = 0; i < n; i++)
    {
        if (max<s[i].marks)
        {
            max=s[i].marks;
        }
    }
    
    printf("Topper Marks:%.2f",max);

    return 0;
}