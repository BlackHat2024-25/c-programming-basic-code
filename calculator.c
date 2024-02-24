#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); // Notice the space before %c to consume any leading whitespace

    if (operator == '+' || operator == '-' || operator == '*' || operator == '/') {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("%.3lf + %.3lf = %.3lf", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
                } else {
                    printf("Error! Division by zero.");
                }
                break;
            default:
                // This should never be reached due to the if condition checking for a valid operator
                break;
        }
    } else {
        printf("Error! you choose Invalid operator.");
    }

    return 0;
}
