// // Write a program to calculate sum and average of five numbers  entered by user.
// 2nd program

#include<stdio.h>

int main(){

    int a = 2,b = 2,c = 2,d = 2,e = 2;
    float sum;

    // printf("enter five numbers for sum :");
    // scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    // sum = a + b + c + d + e;
    printf("sum of five numbers is :",a + b + c + d + e);
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);


    printf("the average of five numbers is :", (a + b + c + d + e)/5);
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    return 0;

}
