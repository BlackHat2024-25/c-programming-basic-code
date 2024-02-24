// Write a program to check whether a character is vowel or consonant using switch statement.
// program #10

#include <stdio.h>

int main()
{

    char ch;

    printf("Enter charactor :");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel\n", ch);

        break;

    default:
        printf("%c is a constant\n", ch);
    }
    return 0;
}
