#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks[5];
    float total;
    float average;
    char grade;
};

char calculateGrade(float avg) {
    if (avg >= 90)
        return 'A';
    else if (avg >= 75)
        return 'B';
    else if (avg >= 60)
        return 'C';
    else if (avg >= 40)
        return 'D';
    else
        return 'F';
}

int main() {
    struct Student s[100];
    int n, m, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter number of subjects: ");
    scanf("%d", &m);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Name: ");
        scanf("%s", s[i].name);

        s[i].total = 0;
        for (j = 0; j < m; j++) {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].average = s[i].total / m;
        s[i].grade = calculateGrade(s[i].average);
    }

    printf("\n----------------------------------------------------\n");
    printf("RollNo\tName\tTotal\tAverage\tGrade\n");
    printf("----------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%.2f\t%c\n", s[i].rollNo, s[i].name, s[i].total, s[i].average, s[i].grade);
    }

    printf("----------------------------------------------------\n");

    return 0;
}
