#include<stdio.h>

int main(){

    char operator;
    double num1, num2, result;

    printf("enter operator (+, -, *, /):");
    scanf("%c", &operator);

    if(operator == '+' || operator == '-' || operator == '*' || operator == '/'){
        printf("enter two numbers :");
        scanf("%lf %lf", &num1, &num2);
    }
    else{
        printf("invalid choice of operator");
    }
 switch(operator){
    case '+':
    result = num1 + num2;
    printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
    break;

    case '-':
    result = num1 - num2;
    printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
    break;

    case '*':
    result = num1 * num2;
    printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
    break;

    case'/':

    if(num2 !=0){

        result = num1 / num2;
        printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
    }
    else{
        printf("Error! division by zero");
    }
        break;
    }
    return 0;
}
    
