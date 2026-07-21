#include <stdio.h>
#include <string.h>
typedef struct student
{
    int roll;
    char name[50];
    float marks;
}std;

void loadStudents(std s[], int *count);

void addstd(std s[], int *count);

void displaystd(std s[], int count);

void searchstd(std s[], int count);
void searchroll(std s[], int count);
void searchname(std s[], int count);
void searchmarks(std s[], int count);

void updatestd(std s[], int count);
void updateroll(std s[], int count);
void updatename(std s[], int count);

void deletestd(std s[], int *count);
void deleteroll(std s[], int *count);
void deletename(std s[], int *count);

void saveStudents(std s[], int count);

void sortstd(std s[], int count);
void sortroll(std s[], int count, int order);
void sortname(std s[], int count, int order);
void sortmarks(std s[], int count, int order);

void statistics(std s[], int count);

int main(){
    std s[100];
    int count=0;

    loadStudents(s, &count);

    int choice;

    while (1)
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Sort Students\n");
        printf("7. Statistics\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addstd(s,&count);
                saveStudents(s, count);
                break;

            case 2:
                displaystd(s,count);
                break;

            case 3:
                searchstd(s,count);
                break;

            case 4:
                updatestd(s,count);
                saveStudents(s, count);
                break;

            case 5:
                deletestd(s,&count);
                saveStudents(s, count);
                break;

            case 6:
                sortstd(s,count);
                saveStudents(s, count);
                break;

            case 7:
                statistics(s, count);
                break;

            case 8:
                saveStudents(s, count);
                printf("THANK YOU!");
                return 0;

            default:
                printf("Invalid choice!");
        }
    }

    return 0;
}
void loadStudents(std s[], int *count)
{
    FILE *fp = fopen("students.dat", "rb");

    if (fp == NULL)
    {
        *count = 0;
        return;
    }

    *count = fread(s, sizeof(std), 100, fp);

    fclose(fp);
}
void addstd(std s[], int *count)
{
    int roll;

    printf("Enter the roll number: ");
    scanf("%d", &roll);

    // Check for duplicate roll number
    for (int i = 0; i < *count; i++)
    {
        if (s[i].roll == roll)
        {
            printf("Roll number already exists!\n");
            return;
        }
    }

    s[*count].roll = roll;

    printf("Enter the name: ");
    scanf(" %[^\n]", s[*count].name);

    do
    {
        printf("Enter the marks (0-100): ");
        scanf("%f", &s[*count].marks);

        if (s[*count].marks < 0 || s[*count].marks > 100)
        {
            printf("Invalid marks! Marks must be between 0 and 100.\n");
        }

    } while (s[*count].marks < 0 || s[*count].marks > 100);

    (*count)++;

    printf("\nStudent added successfully!\n");
}
void displaystd(std s[],int count){
    if (count == 0)
    {
        printf("No students found.\n");
        return;
    }
    printf("\n+--------+----------------------+--------+\n");
    printf("| %-6s | %-20s | %-6s |\n", "Roll", "Name", "Marks");
    printf("+--------+----------------------+--------+\n");

    for (int i = 0; i < count; i++)
    {
        printf("| %-6d | %-20s | %-6.2f |\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }

    printf("+--------+----------------------+--------+\n");
}
void searchstd(std s[],int count){
    printf("\nSearch Student By\n");
    printf("1. Roll Number\n");
    printf("2. Name\n");
    printf("3. Marks\n");
    printf("Enter your choice: ");
    int c;
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        searchroll(s,count);
        break;
    
    case 2:
        searchname(s,count);
        break;

    case 3:
        searchmarks(s, count);
        break;

    default:
        printf("Invalid choice!");
    }
}
void searchroll(std s[],int count){
    int r;
    printf("Enter the roll no.:");
    scanf("%d",&r);

    int found=0;

    printf("Matched Record(s):\n");
    printf("Roll no. Name      Marks\n");
    for (int i = 0; i <count; i++)
    {
        if (s[i].roll==r)
        {
            printf("%-8d %-9s %.2f\n",s[i].roll,s[i].name,s[i].marks);
            found=1;
        }
    }
    if (found==0)
    {
        printf("\nNo matches found!");
    }
}
void searchname(std s[],int count){
    char n[50];
    printf("Enter the name:");
    scanf(" %[^\n]",n);

    int found=0;

    printf("Matched Record(s):\n");
    printf("Roll no. Name      Marks\n");
    for (int i = 0; i <count; i++)
    {
        if (strcmp(s[i].name,n)==0)
        {
            printf("%-8d %-9s %.2f\n",s[i].roll,s[i].name,s[i].marks);
            found=1;
        }
    }
    if (found==0)
    {
        printf("\nNo matches found!");
    }
}
void searchmarks(std s[], int count){
    float marks;
    printf("\nEnter the marks:");
    scanf("%f",&marks);

    int found=0;
    printf("Matched Record(s):\n");
    printf("Roll no. Name      Marks\n");

    for (int i = 0; i <count; i++)
    {
        if (s[i].marks == marks)
        {
            printf("%-8d %-9s %.2f\n",s[i].roll,s[i].name,s[i].marks);
            found=1;
        }
    }
    if (found==0)
    {
        printf("\nNo matches found!");
    }
}
void updatestd(std s[],int count){
    printf("\nUpdate Student By\n");
    printf("1. Roll Number\n");
    printf("2. Name\n");
    printf("Enter your choice: ");

    int c;
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        updateroll(s,count);
        break;
    
    case 2:
        updatename(s,count);
        break;

    default:
        printf("Invalid choice!");
    }
}
void updateroll(std s[],int count){
    int r;
    printf("Enter the roll no.:");
    scanf("%d",&r);

    int found=0;

    for (int i = 0; i <count; i++)
    {
        if (s[i].roll==r)
        {
            int newroll;

            printf("Enter new roll number: ");
            scanf("%d", &newroll);

            int duplicate = 0;

            for (int j = 0; j < count; j++)
            {
                if (j != i && s[j].roll == newroll)
                {
                    duplicate = 1;
                    break;
                }
            }

            if (duplicate)
            {
                printf("Roll number already exists!\n");
                return;
            }

            s[i].roll = newroll;

            printf("Enter new name:");
            scanf(" %[^\n]",s[i].name);

            printf("Enter new marks:");
            scanf("%f",&s[i].marks);

            found=1;
            printf("\nUpdated 1 record\n");
            break;
        }
    }
    if (found==0)
    {
        printf("No student found!");
    }
}
void updatename(std s[],int count){
    char n[50];
    printf("Enter the name:");
    scanf(" %[^\n]",n);

    int found=0;

    for (int i = 0; i <count; i++)
    {
        if (strcmp(s[i].name,n)==0)
        {
            int newroll;

            printf("Enter new roll number: ");
            scanf("%d", &newroll);

            int duplicate = 0;

            for (int j = 0; j < count; j++)
            {
                if (j != i && s[j].roll == newroll)
                {
                    duplicate = 1;
                    break;
                }
            }

            if (duplicate)
            {
                printf("Roll number already exists!\n");
                return;
            }

            s[i].roll = newroll;

            printf("Enter new name:");
            scanf(" %[^\n]",s[i].name);

            printf("Enter new marks:");
            scanf("%f",&s[i].marks);

            found=1;
            printf("\nUpdated 1 record\n");
            break;
        }
    }
    if (found==0)
    {
        printf("No student found!");
    }
}
void deletestd(std s[],int *count){
    printf("\nDelete Student By\n");
    printf("1. Roll Number\n");
    printf("2. Name\n");
    printf("Enter your choice: ");

    int c;
    scanf("%d", &c);

    switch (c)
    {
        case 1:
            deleteroll(s, count);
            break;

        case 2:
            deletename(s, count);
            break;

        default:
            printf("Invalid choice!\n");
    }
}
void deleteroll(std s[],int *count){
    int r;
    printf("Enter the roll no.:");
    scanf("%d",&r);

    int found=0;
    int index;

    for (int i = 0; i <*count; i++)
    {
        if (s[i].roll==r)
        {
            index=i;
            found=1;
            break;
        }
    }
    if (found==0)
    {
        printf("\nNo matches found!");
    }
    else
    {
        char choice;

        printf("\nAre you sure you want to delete this student? (Y/N): ");
        scanf(" %c", &choice);

        if (choice != 'Y' && choice != 'y')
        {
            printf("Deletion cancelled.\n");
            return;
        }

        for (int j = index; j < *count-1; j++)
        {
            s[j]=s[j+1];
        }
        (*count)--;
        printf("\nDeleted successfully.");
    }
}
void deletename(std s[],int *count){
    char n[50];
    printf("Enter the name:");
    scanf(" %[^\n]",n);

    int found=0;
    int index;

    for (int i = 0; i <*count; i++)
    {
        if (strcmp(s[i].name,n)==0)
        {
            index=i;
            found=1;
            break;
        }
    }
    if (found==0)
    {
        printf("\nNo matches found!");
    }
    else
    {
        char choice;

        printf("\nAre you sure you want to delete this student? (Y/N): ");
        scanf(" %c", &choice);

        if (choice != 'Y' && choice != 'y')
        {
            printf("Deletion cancelled.\n");
            return;
        }

        for (int j = index; j < *count-1; j++)
        {
            s[j]=s[j+1];
        }
        (*count)--;
        printf("\nDeleted successfully.");
    }
}
void saveStudents(std s[], int count)
{
    FILE *fp = fopen("students.dat", "wb");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    fwrite(s, sizeof(std), count, fp);

    fclose(fp);
}
void sortstd(std s[],int count){
    printf("\nSort Students By\n");
    printf("1. Roll Number\n");
    printf("2. Name\n");
    printf("3. Marks\n");
    printf("Enter your choice: ");

    int c;
    scanf("%d", &c);

    if(c < 1 || c > 3)
    {
        printf("Invalid choice!\n");
        return;
    }

    printf("\nSort Order\n");
    printf("1. Ascending\n");
    printf("2. Decending\n");
    printf("Enter your choice: ");

    int order;
    scanf("%d",&order);

    switch (c)
    {
        case 1:
            sortroll(s, count,order);
            break;

        case 2:
            sortname(s, count,order);
            break;

        case 3:
            sortmarks(s, count,order);
            break;
    }
    
}
void sortroll(std s[],int count,int order){
    if(order!=1 && order!=2) 
    {
        printf("\nInvalid sort order!");
        return;
    }
    for (int i = 0; i < count-1; i++)
    {
        for (int j = 0; j < count-1-i; j++)
        {
            if (order==1)
            {
                if (s[j].roll > s[j+1].roll)
                {
                    std temp;
                    temp = s[j];
                    s[j] = s[j+1];
                    s[j+1] = temp;
                }  
            }
            else if (order==2)
            {
                if (s[j].roll < s[j+1].roll)
                {
                    std temp;
                    temp = s[j];
                    s[j] = s[j+1];
                    s[j+1] = temp;
                }   
            }
        }
    }
    printf("\nStudents sorted successfully!");
}
void sortname(std s[],int count,int order){
    if(order!=1 && order!=2) 
    {
        printf("\nInvalid sort order!");
        return;
    }
    for (int i = 0; i < count-1; i++)
    {
        for (int j = 0; j < count-1-i; j++)
        {
            if (order==1)
            {
                if (strcmp(s[j].name, s[j+1].name) > 0)
                {
                    std temp;
                    temp = s[j];
                    s[j] = s[j+1];
                    s[j+1] = temp;
                }
            }
            else if (order==2)
            {
                if ((strcmp(s[j].name, s[j+1].name) < 0))
                {
                    std temp;
                    temp = s[j];
                    s[j] = s[j+1];
                    s[j+1] = temp;
                } 
            }
        }
    }
    printf("\nStudents sorted successfully!");
}
void sortmarks(std s[],int count,int order){
    if(order!=1 && order!=2) 
    {
        printf("\nInvalid sort order!");
        return;
    }
    for (int i = 0; i < count-1; i++)
    {
        for (int j = 0; j < count-1-i; j++)
        {
            if (order==1)
            {
                if (s[j].marks > s[j+1].marks)
                {
                    std temp;
                    temp = s[j];
                    s[j] = s[j+1];
                    s[j+1] = temp;
                }
            }
            else if (order==2)
            {
                if (s[j].marks < s[j+1].marks)
                {
                    std temp;
                    temp = s[j];
                    s[j] = s[j+1];
                    s[j+1] = temp;
                }  
            }
        }
    }
    printf("\nStudents sorted successfully!");       
}        
void statistics(std s[],int count){
    if (count==0)
    {
        printf("No students found!");
        return;
    }

    float highest = s[0].marks;
    float lowest = s[0].marks;
    float sum=0;

    for (int i = 0; i < count; i++)
    {
        if (s[i].marks>highest)
        {
            highest=s[i].marks;
        }
        if (s[i].marks<lowest)
        {
            lowest=s[i].marks;
        }
        sum=sum+s[i].marks;
    }
    float average= sum/count;
    printf("\n===== Statistics =====\n");
    printf("Total Students: %d\n",count);
    printf("Highest Marks : %.2f\n",highest);
    printf("Lowest Marks  : %.2f\n",lowest);
    printf("Average Marks : %.2f\n",average);
}