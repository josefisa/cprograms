#include <stdio.h>

int main(){
  float total_bill;
  int tip_value;
  int persons;

  printf("Welcome to the tip calculator!\n");
  printf("Write the value of the bill: \n");
  scanf("%f", &total_bill);

  printf("Write the tip to add (5, 10, 15): \n");
  scanf("%d", &tip_value);

  printf("How many people will share?:\n");
  scanf("%d", &persons);

  total_bill = total_bill + (1 + (float)tip_value/100);
  float value_to_pay = total_bill/(float)persons;

  printf("Each person pays: %.2f\n", value_to_pay);

  return 0;
}
