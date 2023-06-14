#include <stdio.h>
void readStudentInfo(int *rollNo, char *name, float *physicsMarks, float *mathMarks, float *chemistryMarks)
{
    printf("Enter Roll No: ");
    scanf("%d", rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", name);

    printf("Enter Marks in Physics: ");
    scanf("%f", physicsMarks);

    printf("Enter Marks in Math: ");
    scanf("%f", mathMarks);

    printf("Enter Marks in Chemistry: ");
    scanf("%f", chemistryMarks);
}
void calculateResult(float physicsMarks, float mathMarks, float chemistryMarks, float *totalMarks, float *percentage)
{
    *totalMarks = physicsMarks + mathMarks + chemistryMarks;
    *percentage = (*totalMarks / 300) * 100;
}
void getSummary(int rollNo, char *name, float physicsMarks, float mathMarks, float chemistryMarks, float totalMarks, float percentage)
{
    printf("\n--------- Student Summary ---------\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemistryMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
}

int main()
{
    int rollNo;
    char name[100];
    float physicsMarks, mathMarks, chemistryMarks;
    float totalMarks, percentage;
    readStudentInfo(&rollNo, name, &physicsMarks, &mathMarks, &chemistryMarks);
    calculateResult(physicsMarks, mathMarks, chemistryMarks, &totalMarks, &percentage);
    getSummary(rollNo, name, physicsMarks, mathMarks, chemistryMarks, totalMarks, percentage);
    return 0;
}
