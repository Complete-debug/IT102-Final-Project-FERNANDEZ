
#include <stdio.h>

int main() {

    int choice, again = 1;
    int pattern, height;
    int i, j, k;
    int rows;
    int number;

    float prelim, midterm, prefinal, finalGrade, average;

    char word[100];
    char answer;
    int length, palindrome;

    do {

        printf("\n================================\n");
        printf("       IT101 FINAL PROJECT\n");
        printf("================================\n");
        printf("[1] Pattern Generator\n");
        printf("[2] Pascal's Triangle\n");
        printf("[3] Grade Calculator\n");
        printf("[4] Palindrome Checker\n");
        printf("[5] Exit\n");
        printf("================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:

                printf("\n===== PATTERN GENERATOR =====\n");
                printf("[1] Right Triangle\n");
                printf("[2] Square\n");
                printf("[3] Isosceles Triangle\n");
                printf("[4] Inverted Right Triangle\n");
                printf("[5] Christmas Tree\n");

                printf("Choose a pattern: ");
                scanf("%d", &pattern);

                printf("Enter height: ");
                scanf("%d", &height);

                if (height <= 0) {
                    printf("Invalid Height!\n");
                }

                else {

                    switch (pattern) {

                        case 1:
                            for (i = 1; i <= height; i++) {
                                for (j = 1; j <= i; j++) {
                                    printf("*");
                                }
                                printf("\n");
                            }
                            break;

                        case 2:
                            for (i = 1; i <= height; i++) {
                                for (j = 1; j <= height; j++) {
                                    printf("*");
                                }
                                printf("\n");
                            }
                            break;

                        case 3:
                            for (i = 1; i <= height; i++) {
                                for (j = 1; j <= height - i; j++) {
                                    printf(" ");
                                }

                                for (j = 1; j <= (2 * i - 1); j++) {
                                    printf("*");
                                }
                                printf("\n");
                            }
                            break;

                        case 4:
                            for (i = height; i >= 1; i--) {
                                for (j = 1; j <= i; j++) {
                                    printf("*");
                                }
                                printf("\n");
                            }
                            break;

                        case 5:
                            for (k = 1; k <= 3; k++) {
                                for (i = 1; i <= height - k + 1; i++) {
                                    for (j = 1; j <= height - i; j++) {
                                        printf("*");
                                    }

                                    for (j = 1; j <= (2 * i - 1); j++) {
                                        printf("*");
                                    }
                                    printf("\n");
                                }
                            }

                            for (i = 1; i <= 2; i++) {
                                for (j = 1; j < height; j++) {
                                    printf("*");
                                }
                                printf("***\n");
                            }
                            break;

                        default:
                            printf("Invalid Pattern Choice!\n");
                    }
                }
                break;

            case 2:

                printf("\n===== PASCAL'S TRIANGLE =====\n");
                printf("Enter number of rows (1-20): ");
                scanf("%d", &rows);

                if (rows < 1 || rows > 20) {
                    printf("Invalid number of rows!\n");
                }

                else {
                    for (i = 0; i < rows; i++) {

                        for (j = 0; j < rows - i; j++) {
                            printf("  ");
                        }

                        number = 1;

                        for (j = 0; j <= i; j++) {
                            printf("%4d", number);

                            number = number * (i - j) / (j + 1);
                        }

                        printf("\n");
                    }
                }
                break;

            case 3:

                printf("\n===== GRADE CALCULATOR =====\n");

                printf("Enter Prelim Grade: ");
                scanf("%f", &prelim);

                printf("Enter Midterm Grade: ");
                scanf("%f", &midterm);

                printf("Enter Pre-Final Grade: ");
                scanf("%f", &prefinal);

                printf("Enter Final Grade: ");
                scanf("%f", &finalGrade);

                if (prelim < 1 || prelim > 5 ||
                    midterm < 1 || midterm > 5 ||
                    prefinal < 1 || prefinal > 5 ||
                    finalGrade < 1 || finalGrade > 5) {

                    printf("Invalid Grade!\n");
                }

                else {

                    average = (prelim + midterm +
                               prefinal + finalGrade) / 4;

                    printf("\nFinal Average: %.2f\n", average);

                    if (average >= 3.00) {
                        printf("Status: PASS\n");
                    }
                    else {
                        printf("Status: FAIL\n");
                    }
                }
                break;

            case 4:

                printf("\n===== PALINDROME CHECKER =====\n");

                printf("Enter a word: ");
                scanf("%99s", word);

                length = 0;

                while (word[length] != '\0') {
                    length++;
                }

                palindrome = 1;

                for (i = 0; i < length / 2; i++) {

                    if (word[i] != word[length - 1 - i]) {
                        palindrome = 0;
                        break;
                    }
                }

                if (palindrome == 1) {
                    printf("%s is a PALINDROME!\n", word);
                }
                else {
                    printf("%s is NOT a PALINDROME!\n", word);
                }
                break;

            case 5:

                printf("\nThank you for using the program!\n");
                again = 0;
                break;

            default:

                printf("\nInvalid Choice!\n");
        }

        if (choice >= 1 && choice <= 4) {

            printf("\nDo you want to try another operation? (Y/N): ");
            scanf(" %c", &answer);

            if (answer == 'Y' || answer == 'y') {
                again = 1;
            }
            else {
                again = 0;
            }
        }

    } while (again == 1);

    printf("\nProgram Ended.\n");

    return 0;
}


