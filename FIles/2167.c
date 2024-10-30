#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);

  int engine[n], x;

  for (x = 0; x < n; x++) {
    scanf("%d", &engine[x]);
  }

  int fallCount = 0;
  for (x = 1; x < n; x++) {
    if (engine[x] < engine[x - 1]) {
      fallCount = x + 1;
      break;
    }
  }
  printf("%d\n", fallCount);

  return 0;
}