#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);

  int ar[200000 + 10] = {0};
  int a = 1, b = 1;

  ar[1] = 1;
  while (a + b < 200010) {
    int nextFib = a + b;
    ar[nextFib] = 1;
    a = b;
    b = nextFib;
  }

  int count = 0;
  int result = 0;

  for (int i = 1;; i++) {
    if (ar[i] == 0) {
      count++;
      if (count == x) {
        result = i;
        break;
      }
    }
  }

  printf("%d\n", result);
  return 0;
}
