#include <stdio.h>

int main() {

    int choice, again = 1;
    int pattern, height;
    int i, j, k;
    int rows, number;

    float prelim, midterm, prefinal, finalGrade, average;

    char word[100];
    char answer;
    int length, palindrome;

    // MAIN MENU
    do {

        printf("\n================================\n");
        printf("       IT102 FINAL PROJECT\n");
        printf("================================\n");
        printf("[1] Pattern Generator\n");
        printf("[2] Pascal's Triangle\n");
        printf("[3] Grade Calculator\n");
        printf("[4] Palindrome Checker\n");
        printf("[5] Exit\n");
        printf("================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        // MODULE 1: PATTERN GENERATOR
        if (choice == 1) {

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

            else if (pattern == 1) {

                i = 1;

                while (i <= height) {
                    j = 1;

                    while (j <= i) {
                        printf("*");
                        j++;
                    }

                    printf("\n");
                    i++;
                }

            }

            else if (pattern == 2) {

                i = 1;

                while (i <= height) {
                    j = 1;

                    while (j <= height) {
                        printf("*");
                        j++;
                    }

                    printf("\n");
                    i++;
                }

            }

            else if (pattern == 3) {

                i = 1;

                while (i <= height) {
                    j = 1;

                    while (j <= height - i) {
                        printf(" ");
                        j++;
                    }

                    j = 1;

                    while (j <= (2 * i - 1)) {
                        printf("*");
                        j++;
                    }

                    printf("\n");
                    i++;
                }

            }

            else if (pattern == 4) {

                i = height;

                while (i >= 1) {
                    j = 1;

                    while (j <= i) {
                        printf("*");
                        j++;
                    }

                    printf("\n");
                    i--;
                }

            }

            else if (pattern == 5) {

                k = 1;

                while (k <= 3) {

                    i = 1;

                    while (i <= height - k + 1) {

                        j = 1;

                        while (j <= height - i) {
                            printf(" ");
                            j++;
                        }

                        j = 1;

                        while (j <= (2 * i - 1)) {
                            printf("*");
                            j++;
                        }

                        printf("\n");
                        i++;
                    }

                    k++;
                }

                i = 1;

                while (i <= 2) {

                    j = 1;

                    while (j < height) {
                        printf(" ");
                        j++;
                    }

                    printf("***\n");
                    i++;
                }

            }

            else {
                printf("Invalid Pattern Choice!\n");
            }

        }

        // MODULE 2: PASCAL'S TRIANGLE
        else if (choice == 2) {

            printf("\n===== PASCAL'S TRIANGLE =====\n");
            printf("Enter number of rows (1-20): ");
            scanf("%d", &rows);

            if (rows < 1 || rows > 20) {
                printf("Invalid number of rows!\n");
            }

            else {

                i = 0;

                while (i < rows) {

                    j = 0;

                    while (j < rows - i) {
                        printf("  ");
                        j++;
                    }

                    number = 1;
                    j = 0;

                    while (j <= i) {

                        printf("%4d", number);

                        number = number * (i - j) / (j + 1);

                        j++;
                    }

                    printf("\n");
                    i++;
                }

            }

        }

        // MODULE 3: GRADE CALCULATOR
        else if (choice == 3) {

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

                if (average <= 3.00) {
                    printf("Status: PASS\n");
                }

                else {
                    printf("Status: FAIL\n");
                }

            }

        }

        // MODULE 4: PALINDROME CHECKER
        else if (choice == 4) {

            printf("\n===== PALINDROME CHECKER =====\n");

            printf("Enter a word: ");
            scanf("%99s", word);

            length = 0;

            while (word[length] != '\0') {
                length++;
            }

            palindrome = 1;
            i = 0;

            while (i < length / 2) {

                if (word[i] != word[length - 1 - i]) {
                    palindrome = 0;
                    break;
                }

                i++;
            }

            if (palindrome == 1) {
                printf("%s is a PALINDROME!\n", word);
            }

            else {
                printf("%s is NOT a PALINDROME!\n", word);
            }

        }

        // EXIT
        else if (choice == 5) {

            printf("\nThank you for using the program!\n");
            again = 0;

        }

        // INVALID CHOICE
        else {

            printf("\nInvalid Choice!\n");

        }

        // TRY AGAIN
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

