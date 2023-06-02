#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, m;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the number of subjects: ");
    scanf("%d", &m);

    int math_marks[n], eng_marks[n];
    int marks[n][m], coeff[m];
    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d, math and eng: ", i+1);
        scanf("%d %d", &math_marks[i], &eng_marks[i]);
        for (int j = 2; j < m; j++) {
            printf("Enter marks and coefficient for first subject %d, subject %d: ", i+1, j+1);
            scanf("%d %d", &marks[i][j], &coeff[j]);
        }
    }

    for (int i = 0; i < n; i++) {
        int total = math_marks[i]*4 + eng_marks[i]*4;
        int num_subjects = 2;
        for (int j = 2; j < m; j++) {
            if (marks[i][j] >= 0 && marks[i][j] <= 20) {
                total += marks[i][j] * coeff[j];
                num_subjects++;
            }
        }
       double average = (double)total / (double)num_subjects;
        printf("Total marks for student %d: %d\n", i+1, total);
        printf("Average marks for student %d: %.2f\n", i+1, average);
        if (average < 0 || average > 20) {
            printf("Invalid average marks for student %d\n", i+1);
        } else if (average < 6) {
            printf("Remark for student %d: Very Poor\n", i+1);
        } else if (average <= 9) {
            printf("Remark for student %d: Poor\n", i+1);
        } else if (average < 10) {
            printf("Remark for student %d: Below Average\n", i+1);
        } else if (average == 10) {
            printf("Remark for student %d: Average\n", i+1);
        } else {
            printf("Remark for student %d: Good\n", i+1);
        }
    }

    return 0;
}
