#include<stdio.h>
#include<ctype.h>

int main(){
    char input;

    printf("enter a character or a number :");
    scanf("%c", &input);

    if (isalpha(input))
    {
        printf("it's a character value\n");
    }

    else if(isdigit(input))
    {
        printf("it's a number\n");
    }

    else{
        printf("Invalid choice");
    }
    return 0;

    
    
}
