#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *numbers;
  int size = 2;
  int input = 0, i = 0, total = 0;

  numbers = calloc(size, sizeof(int));
  if (numbers == NULL) {
    printf("Out of memory!");
    return 1;
  }

  do { // size handling
    size += 2;
    int *temp = realloc(numbers, sizeof(int) * size);
    if (temp == NULL) {
      printf("Out of memory!");
      free(numbers);
      return 1;
    }
    numbers = temp;

    printf("Enter a number (-1 to quit): ");
    if (scanf("%d", &input) != 1) {
      printf("Invalid input!\n");
      break;
    }

    if (input != -1) {
      numbers[i] = input;
      i++;
    }

  } while (input != -1);

  int num_count = i;
  if (num_count == 0) {
    printf("No numbers entered!\n");
  } else { // finding total
    for (int x = 0; x < num_count; x++) {
      total += numbers[x];
    }
    printf("Average: %.2f\n", (double)total / num_count);
  }

  free(numbers);

  return 0;
}
