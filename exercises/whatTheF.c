#include <stdio.h>

float Q_rsqrt(float number) {
  long i;
  float x2 = number * 0.5F, y = number;

  i = *(long *)&y;
  i = 0x5f3759df - (i >> 1); // what the f***?
  y = *(float *)&i;
  y = y * (1.5F - (x2 * y * y)); // newton refinement
  return y;
}

int main() {
  float ans = Q_rsqrt(5.0);
  printf("The answer to whatever this was doing is: %f", ans);
  return 0;
}
