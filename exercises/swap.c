#include <stdio.h>

void swap(int *a, int *b) {
  if (a != b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
  }
}

int main() {
  int a;
  printf("Digit the first number: \n");
  scanf("%d", &a);

  int b;
  printf("Digit the second number: \n");
  scanf("%d", &b);

  printf("Try of XOR: %d\n", (a + 1) ^ b);

  swap(&a, &b);
  printf("In main: a = %d, b = %d\n", a, b);

  return 0;
}
