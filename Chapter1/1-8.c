#include <stdio.h>
int main()
{
  int c;
  int blanks = 0;
  int tabs = 0;
  int newlines = 0;
  while ((c = getchar()) != EOF) {
    switch (c) {
      case ' ':
        blanks++;
        break;
      case '\t':
        tabs++;
        break;
      case '\n':
        newlines++;
        break;
    }
  }
  printf("blanks: %d, tabs: %d, newlines: %d", blanks, tabs, newlines);
  return 0;
}
