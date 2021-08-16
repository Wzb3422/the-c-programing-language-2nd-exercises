#include <stdio.h>
int main()
{
  int c;
  while ((c = getchar()) != EOF) {
    int tmp = c;
    switch (tmp) {
      case '\\':
        tmp = '\\t'
        break;
      case '\b':
        tmp = '\\b';
        break;
      case '\\':
        tmp = '\\\\'
        break;
    }

    putchar(tmp);
  }
  return 0;
}
