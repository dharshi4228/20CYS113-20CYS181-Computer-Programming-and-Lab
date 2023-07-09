#include <stdio.h>

int main() {
    int decimal;
   // printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    if (decimal <= 0) {
        printf("Error: Value should be greater than 0");
    }
    else {
        
        printf("Binary equivalent: ");
        decToBinary(decimal);
       
        printf("\nOctal equivalent: ");
        decToOctal(decimal);

       
        printf("\nHexadecimal equivalent: ");
        decToHexadecimal(decimal);
        
        printf("\n");
    }
    
    return 0;
}

int decToBinary(int decimal) {
    if (decimal > 0) {
        
        decToBinary(decimal / 2);
       
        printf("%d", decimal % 2);
    }
}

void decToHexadecimal(int decimal) {
    if (decimal > 0) {

        decToHexadecimal(decimal / 16);
        
        int remainder = decimal % 16;
        if (remainder < 10) {
            printf("%d", remainder);
        } 
        else {
            printf("%c", 'A' + remainder - 10);
        }
    }
}

void decToOctal(int decimal) {
    if (decimal > 0) {
       
        decToOctal(decimal / 8);
        
        printf("%d", decimal % 8);
    }
}