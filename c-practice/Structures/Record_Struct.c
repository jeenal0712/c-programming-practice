//usage of typedef and array of structure.
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

    printf("\nStudent Details:\n");

    for (int i = 0; i < n; i++) {
        printf("Roll : %d\n", s[i].roll);
        printf("Name : %s\n", s[i].name);
        printf("Marks: %.2f\n\n", s[i].marks);
    }

    return 0;
}