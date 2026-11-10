#include <stdio.h>
#include <stdlib.h>

int main(void) {
  size_t capacity = 2;
  size_t count = 0;
  int input;
  long long total = 0;

  int *numbers = malloc(capacity * sizeof *numbers);
  if (numbers == NULL) {
    fprintf(stderr, "Out of memory!\n");
    return 1;
  }

  while (1) {
    printf("Enter a number (-1 to quit): ");
    if (scanf("%d", &input) != 1) {
      printf("Invalid input!\n");
      break;
    }
    if (input == -1)
      break;

    if (count == capacity) { // grow only when full
      capacity *= 2;
      int *temp = realloc(numbers, capacity * sizeof *numbers);
      if (temp == NULL) {
        fprintf(stderr, "Out of memory!\n");
        free(numbers);
        return 1;
      }
      numbers = temp;
    }
    numbers[count++] = input;
  }

  if (count == 0) {
    printf("No numbers entered!\n");
  } else {
    for (size_t x = 0; x < count; x++) {
      total += numbers[x];
    }
    printf("Average: %.2f\n", (double)total / count);
  }

  free(numbers);
  return 0;
}
