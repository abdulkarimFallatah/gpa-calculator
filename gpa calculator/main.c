#include <stdio.h>
  #include <stdlib.h>
  #include <string.h>

  int main() {
        char str[100], ch;
        int i, grade[5];
        float credit[5], gpa = 0.0, totCredit = 0.0;

        /* get the letter grade and credits from the user */

        printf("Letter Grade and Credits for each subject:\n");
        printf("The letters start from A to E\n");
        for (i = 0; i < 5; i++) {
                printf("Subject %d(Grade|Credit):", i + 1);
                ch = getchar();
                grade[i] = ch;
                scanf("%f", &credit[i]);
                getchar();
        }

        /* print the input grades and credits */
        printf("\nSubject | Grade | Credit\n");
        for (i = 0; i < 5; i++) {
                printf("   %d    |  %c    | %.0f\n", i + 1, grade[i], credit[i]);
        }

        /* calculate gpa value */
        for (i = 0; i < 5; i++) {
                switch (grade[i]) {
                        case 'S':
gpa = gpa + 10 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;
                        case 'A':
                                gpa = gpa + 9 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;

                        case 'B':
                                gpa = gpa + 8 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;

                        case 'C':
                                gpa = gpa + 7 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;

                        case 'D':
                                gpa = gpa + 6 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;

                        case 'E':
                                gpa = gpa + 5 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;

                        default:
                                printf("Given Wrong grade!!\n");
                                exit(0);
   }
        }
        printf("GPA: %f\tcredit: %f\n", gpa, totCredit);
        gpa = gpa / totCredit;
        printf("GPA for your score: %.2f\n", gpa);
        return 0;
  }
