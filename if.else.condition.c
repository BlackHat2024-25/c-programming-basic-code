include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check if any two numbers are equal
    if (num1 == num2 && num2 == num3) {
        printf("All numbers all equal.\n");
    }
    else if((num1 == num2) || (num2 == num3) || (num1 == num3)){
        printf("two numbers are equal.\n");
    }
        else {
        printf("None of the given numbers are equal.\n");
    }

    return 0;
}