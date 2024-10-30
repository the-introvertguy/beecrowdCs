#include <stdio.h>

int main() {
  int n;

  while (scanf("%d", &n) && n != 0) {
    int inputs[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", &inputs[i]);
    }

    int start;
    scanf("%d", &start);
    start--;

    int value = 0;
    for (int i = start;; i = inputs[i] - 1) {
      if (i == inputs[i] - 1) {
        value = i + 1;
        break;
      }
    }

    printf("%d\n", value);
  }

  return 0;
}
