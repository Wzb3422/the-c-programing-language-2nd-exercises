#include <stdio.h>
int main()
{
  int c;
  int is_prev_newline = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (is_prev_newline == 0) {
        putchar('\n');
      }
      is_prev_newline = 1;
    } else {
      is_prev_newline = 0;
      putchar(c);
    }
  }
  return 0;
}
