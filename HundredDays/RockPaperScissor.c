#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int read_lower(char *buf, size_t size) {
  if (fgets(buf, size, stdin) == NULL)
    return 0;

  if (strchr(buf, '\n') == NULL) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
  }

  buf[strcspn(buf, "\n")] = '\0';

  char *start = buf;
  while (isspace((unsigned char)*start))
    start++;
  memmove(buf, start, strlen(start) + 1);

  size_t len = strlen(buf);
  while (len > 0 && isspace((unsigned char)buf[len - 1]))
    buf[--len] = '\0';

  for (size_t i = 0; buf[i] != '\0'; i++)
    buf[i] = tolower((unsigned char)buf[i]);

  return 1;
}

int main() {
  char choice[16];

  while (1) {
    printf("rock, paper or scissors? ");

    if (!read_lower(choice, sizeof choice)) {
      printf("\nInput closed.\n");
      return 1;
    }

    if (strcmp(choice, "rock") == 0 || strcmp(choice, "paper") == 0 ||
        strcmp(choice, "scissors") == 0)
      break;

    printf("Invalid choice, try again!\n");
  }
  printf("You typed: %s\n", choice);
  // compare(choice);

  return 0;
}
