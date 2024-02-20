#include <stdio.h>

int main() {
    int i, limit;
    
    printf("Enter the limit for the table of 6: ");
    scanf("%d", &limit);
    
    for(i = 1; i <= limit; i++) {
        printf("6 * %d = %d\n"
          , i , 6 * i);
    }
    
    return 0;
}