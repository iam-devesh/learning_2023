#include <stdio.h>
#include <string.h>
struct student
{
    int roll_number;
    char name[50];
};
void swap_fields(struct student *s1, struct student *s2)
{
    int temp_roll_number = s1->roll_number;
    char temp_name[50];
    strcpy(temp_name, s1->name);
    s1->roll_number = s2->roll_number;
    strcpy(s1->name, s2->name);
    s2->roll_number = temp_roll_number;
    strcpy(s2->name, temp_name);
}

int main()
{
    struct student s1;
    struct student s2;
    printf("Enter details for student 1:\n");
    printf("Roll Number: ");
    scanf("%d", &s1.roll_number);
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Enter details for student 2:\n");
    printf("Roll Number: ");
    scanf("%d", &s2.roll_number);
    printf("Name: ");
    scanf("%s", s2.name);
    printf("\nBefore swapping:\n");
    printf("Student 1:\n");
    printf("Roll Number: %d\n", s1.roll_number);
    printf("Name: %s\n", s1.name);
    printf("Student 2:\n");
    printf("Roll Number: %d\n", s2.roll_number);
    printf("Name: %s\n", s2.name);
    swap_fields(&s1, &s2);
    printf("\nAfter swapping:\n");
    printf("Student 1:\n");
    printf("Roll Number: %d\n", s1.roll_number);
    printf("Name: %s\n", s1.name);
    printf("Student 2:\n");
    printf("Roll Number: %d\n", s2.roll_number);
    printf("Name: %s\n", s2.name);
    return 0;
}
