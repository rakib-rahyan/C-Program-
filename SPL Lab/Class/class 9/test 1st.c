#include<stdio.h>
struct student
{
    char name[100];
    int id;
    float cgpa;
};

int main()
{
    struct student s[10];
    int i = 0, x = 0;
    float z;

    // Input details for 10 students
    for(i = 0; i < 10; i++)
    {
        printf("Enter name: ");
        gets(s[i].name);

        printf("Enter ID: ");
        scanf("%d",&s[i].id);

        printf("Enter CGPA: ");
        scanf("%f",&s[i].cgpa);

        getchar();  // To consume the newline character left by scanf
    }

    // Initialize z with the first student's CGPA
    z = s[0].cgpa;

    // Find the student with the lowest CGPA
    for(i = 1; i < 10; i++) // start from the second student
    {
        if(z > s[i].cgpa)
        {
            z = s[i].cgpa;
            x = i;
        }
    }

    // Output the details of the student with the lowest CGPA
    printf("\nStudent with the lowest CGPA:\n");
    printf("Name: %s\n", s[x].name);
    printf("ID: %d\n", s[x].id);
    printf("CGPA: %.2f\n", s[x].cgpa);

    return 0;
}
