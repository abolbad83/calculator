#include <stdio.h>
#include <stdlib.h> // For exit() function

// Function prototypes
void displayMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    char choice;
    double num1, num2, result;

    do {
        displayMenu();
        printf("Enter your choice (1-5): ");
        scanf(" %c", &choice);

        if(choice == '5') {
            printf("Exiting calculator...\n");
            exit(0);
        }

        if(choice < '1' || choice > '5') {
            printf("Invalid input! Please try again.\n");
            continue;
        }

        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch(choice) {
            case '1':
                result = add(num1, num2);
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '2':
                result = subtract(num1, num2);
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '3':
                result = multiply(num1, num2);
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '4':
                if(num2 == 0) {
                    printf("Error! Division by zero is not allowed.\n");
                } else {
                    result = divide(num1, num2);
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
        }

        printf("\nPress Enter to continue...");
        getchar(); // Wait for Enter key
        getchar(); // Catch the newline character

    } while(1);

    return 0;
}

void displayMenu() {
    system("clear");
    printf("\n=== Simple Calculator ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

