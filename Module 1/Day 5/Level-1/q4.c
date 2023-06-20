#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[50];
    int roll_number;
    float marks;
};
int main()
{
    int n;
    struct student *students;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    students = (struct student *)malloc(n * sizeof(struct student));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &students[i].roll_number);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The name of student %d is %s.\n", i + 1, students[i].name);
        printf("The roll number of student %d is %d.\n", i + 1, students[i].roll_number);
        printf("The marks of student %d is %.1f.\n", i + 1, students[i].marks);
    }
    free(students);

    return 0;
}
