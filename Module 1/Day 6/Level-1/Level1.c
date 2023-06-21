#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

// Function to parse the string and initialize an array of structures
void parse_string(const char *str, struct Student *student)
{
    sscanf(str, "%d %s %f", &(student->rollno), student->name, &(student->marks));
}

// Function to initialize all members in the above array of structures
void initialize_students(struct Student *students, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

// Function to display all members in the above array of structures
void display_students(const struct Student *students, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Rollno: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

// Function to sort the array of structures in descending order based on marks
void sort_students(struct Student *students, int n)
{
    int i, j;
    struct Student temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (students[i].marks < students[j].marks)
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

// Function to perform a search operation on the array of structures based on name of the student
int search_student(const struct Student *students, int n, const char *name)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (strcmp(students[i].name, name) == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d", &n);

    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    initialize_students(students, n);

    printf("Enter the input strings:\n");
    for (int i = 0; i < n; i++)
    {
        char input[100];
        scanf(" %[^\n]", input);
        parse_string(input, &students[i]);
    }

    printf("The input array is:\n");
    display_students(students, n);

    sort_students(students, n);

    printf("The sorted array is:\n");
    display_students(students, n);

    char searchName[20];
    printf("Enter the name of the student to search: ");
    scanf(" %[^\n]", searchName);
    int searchIndex = search_student(students, n, searchName);
    if (searchIndex != -1)
    {
        printf("The student was found at index %d\n", searchIndex);
    }
    else
    {
        printf("The student was not found\n");
    }

    free(students);
    return 0;
}
