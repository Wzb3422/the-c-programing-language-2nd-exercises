#include <stdio.h>
/* print Celsius-Fahrenheit table
for celsius = -20, 0, ..., 160; floating-point version */
int main()
{
  float fahr, celsius;
  float lower, upper, step;
  lower = -20; /* lower limit of temperatuire scale */
  upper = 160; /* upper limit */
  step = 3; /* step size */

  celsius = lower;

  /* Prints the heading */
  printf("%6s %3s\n", "Cels", "Fah");

  while (celsius <= upper) {
    fahr = (9.0 / 5.0 * celsius) + 32.0;
    printf("%6.0f %3.1f\n", celsius, fahr);
    celsius = celsius + step;
  }

  return 0;
}
