#include <stdio.h>

int main() {
    int n, i;
    float marks, total = 0, percentage;
    char grade;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of subjects must be greater than 0.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        printf("Enter marks for subject %d (out of 100): ", i);
        scanf("%d", &marks);

        if (marks < 0 || marks > 100) {
            printf("Invalid marks! Enter a value between 0 and 100.\n");
            i--;            // ask for this subject again
            continue;
        }
        total += marks;
    }

    percentage = total / n;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 40)
        grade = 'E';
    else
        grade = 'F';

    printf("\n--- Result ---\n");
    printf("Total Marks : %.2f / %d\n", total, n * 100);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("Grade       : %c\n", grade);

    if (grade == 'F')
        printf("Status      : Fail\n");
    else
        printf("Status      : Pass\n");

    return 0;
}