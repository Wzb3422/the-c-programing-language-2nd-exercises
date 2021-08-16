#include <stdio.h>
int main()
{
  int c;
  int count = 0;
  while ((c = getchar()) != EOF) {
    int tmp = c;
    if (tmp == ' ') {
      count++;
    } else {
      count = 0;
    }

    if (count > 1)
      continue;

    putchar(tmp);
  }
  return 0;
}
