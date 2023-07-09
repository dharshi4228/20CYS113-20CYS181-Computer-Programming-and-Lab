#include <stdio.h>

int main() {
    int n;
   
    scanf("%d", &n);
    
    int width = 2*n - 1;    // width of the widest row
    
    // printing the upper half of the hourglass
    for (int i = 0; i < n; i++) {
        // printing the spaces before the letters
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        // printing the letters in ascending order
        for (int j = 0; j < width - 2*i; j++) {
            printf("%c ", 'D' + j);
        }
        printf("\n");
    }
    
    // printing the lower half of the hourglass
    for (int i = n - 2; i >= 0; i--) {
        // printing the spaces before the letters
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        // printing the letters in ascending order
        for (int j = 0; j < width - 2*i; j++) {
            printf("%c ", 'D' + j);
        }
        printf("\n");
    }
    
}