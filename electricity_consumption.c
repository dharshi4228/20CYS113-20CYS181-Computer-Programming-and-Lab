#include <stdio.h>
void main() {
  char cus_name[5][25];
  int cus_eb_number[5];
  float cus_units_consumed[5];
  float cus_bill[5];
  for (int i = 0; i < 5; i++) {
   
    scanf("%s", cus_name[i]);

    scanf("%d", &cus_eb_number[i]);
    
    scanf("%f", &cus_units_consumed[i]);
  }
  for (int i = 0; i < 5; i++) {
    cus_bill[i] = 0;
    if (cus_units_consumed[i] <= 100) {
      cus_bill[i] = cus_units_consumed[i] * 0;
    } else if (cus_units_consumed[i] <= 400) {
      cus_bill[i] = 100 * 0 + (cus_units_consumed[i] - 100) * 2.25;
    } else if (cus_units_consumed[i] <= 500) {
      cus_bill[i] = 100 * 0 + 300 * 2.25 + (cus_units_consumed[i] - 400) * 4.50;
    } else if (cus_units_consumed[i] <= 600) {
      cus_bill[i] = 100 * 0 + 300 * 2.25 + 100 * 4.50 + (cus_units_consumed[i] - 500) * 6;
    } else {
      cus_bill[i] = 100 * 0 + 300 * 2.25 + 100 * 4.50 + 100 * 6 + (cus_units_consumed[i] - 600) * 8;
    }
  }
  for (int i = 0; i < 5; i++) {
    printf("Customer name: %s\n", cus_name[i]);
    printf("EB number: %d\n", cus_eb_number[i]);
    printf("Units consumed: %.3f\n", cus_units_consumed[i]);
    printf("Bill: INR %.2f\n", cus_bill[i]);
  }
  
}