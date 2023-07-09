#include <stdio.h>
int main() {
    
    int n, reversed = 0, remainder, ans;

    scanf("%d", &n);

    ans = n;

    reversed = 0;
    
    while (n != 0) {
        
        remainder = n % 10;
  
        reversed = reversed * 10 + remainder;
    
        n /= 10;
    }
    
    if (ans == reversed) {
       
        printf("Is a palindrome.");
    } else {
       
        printf("Is not a palindrome.");
    }
    return 0;
}