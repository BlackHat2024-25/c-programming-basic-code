#include<stdio.h>

int main(){

    int age;

    printf("enter your age :");
    scanf("%d", &age);

    printf("Hi shivam, you are a %d year old\n", age);

    if (age >=18)
    {
        printf("shivam, you are eligible for vote");
    }
    else if (age >=14)
    {
        printf("you can vote for kids");
    }

    else if (age>=8)   
    {
        printf("you can vote for babies");
    }
    else{
        printf("you can go school dont think extra. only do enjoy ");

    }
    return 0;
    
    
}
