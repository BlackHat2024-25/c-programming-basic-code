// 5.	Write a program in C to calculate simple interest.				
				
#include<stdio.h>
int main(){

    int p,n;
    float r, si;

    printf("Enter your value :");
    scanf("%d%d%f", &p, &n, &r);

   si = (p * r * n)/100;

   printf("simple interest is :%f", si);
   return 0;

}
