#include<stdio.h>

int main(){

    int num1, num2;

    printf("enter first number:");
    scanf("%d",&num1);

    printf("enter second number");
    scanf("%d",&num2);

    printf("before interchange : num1 = %d, num2 =%d\n",num1,num2);

    num1 = (num1 ^ num2);
    num2 = (num1 ^ num2);
    num1 = (num1 ^ num2);

    printf("after interchange: num1 = %d, num2 = %d\n", num1,num2);

    return 0;
}
