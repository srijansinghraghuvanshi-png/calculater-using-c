#include <stdio.h>

int main(void) {
    int choice;
    float num1, num2;

    while (1) {
        printf("\n===== CALCULATOR =====\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            return 1;
        }

        if (choice == 5) {
            printf("Exiting... Thank you!\n");
            break;
        }

        if (choice < 1 || choice > 4) {
            printf("Invalid choice. Try again.\n");
            continue;
        }

        printf("Enter two numbers: ");
        if (scanf("%f %f", &num1, &num2) != 2) {
            printf("Invalid number input.\n");
            return 1;
        }

        switch (choice) {
            case 1:
                printf("Result = %.2f\n", num1 + b);
                break;
            case 2:
                printf("Result = %.2f\n", num1 - b);
                break;
            case 3:
                printf("Result = %.2f\n", num1 * b);
                break;
            case 4:
                if (num2 == 0.0f) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    printf("Result = %.2f\n", num1 / num2);
                }
                break;
        }
    }

    return 0;
}
