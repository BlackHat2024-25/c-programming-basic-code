// Program in C to find and display greater number from three numbers. 
// program #9

#include<stdio.h>

int main(){

    int num1, num2, num3;

    printf("Enter your three number :");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 == num2 && num2 == num3)
    {
        printf("All three numbers are equal");
    }
    

    else if (num1 >= num2 && num1 >= num3)
    {
        printf("the greatest number is: %d\n", num1);
    }
    else if (num2 >=num1 && num2>=num3)
    {
        printf("the greatest number is:%d\n",num2);
    }
    else
    {
        printf("the gratest number is:%d \n",num3);
    }
    return 0;
}
