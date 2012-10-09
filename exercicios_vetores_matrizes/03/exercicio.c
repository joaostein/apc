#include <stdio.h>
#include <math.h>

#define n 3

int main() {

  float v[n], diff, currentDiff;
  int i;

  for (i = 0; i < n; i++) {
    printf("\nv[%d] = ", i);
    scanf("%f", &v[i]);
  }

  diff = v[0];

  for (i = 0; i < n - 1; i++) {
     currentDiff = fabs(v[i] - v[i + 1]);
    if (currentDiff > diff) {
      diff = currentDiff;
    }
  }

  printf("\nMaior diferença é: %.2f\n", diff);

  system("pause");
}
