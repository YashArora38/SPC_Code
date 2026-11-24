#include <stdio.h>

int main() {
    int num = 0;
    int final = 0;
    int place = 1; 

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        int rem = num % 2;       
        final = final + (rem * place); 
        num = num / 2;           
        place =place*10;             
    }

    printf("Binary: %d\n", final);
    return 0;
}
