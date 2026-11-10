#include <stdio.h>

int main() {
  char message[] = "Processing complete\n";

  if (fputs(message, stdout) == EOF) {
    perror("Failed to write stdout");
    return 1;
  }
  return 0;
}
