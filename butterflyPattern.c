#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);

    // 1. Upper half of the butterfly
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }

        
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n"); 
    }

    // 2. Lower half of the butterfly (mirror image)
    for (int i = n; i >= 1; i--) {
        // Left wings: stars decrease from n down to 1
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Middle blank spaces: 2 * (n - i)
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }

        
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n"); 
    }

    return 0;
}
