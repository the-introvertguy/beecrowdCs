#include <stdio.h>

int main() {
  int n;
  while (1) {
    scanf("%d", &n);
    if (n < 2) {
      break;
    }

    int sus[n];
    int i;
    for (i = 0; i < n; i++) {
      scanf("%d", &sus[i]);
    }

    int max = 0;
    int max2 = (sus[1] > sus[0]) ? 0 : 1;
    max = (sus[1] > sus[0]) ? 1 : 0;

    for (i = 2; i < n; i++) {
      if (sus[i] > sus[max]) {
        max2 = max;
        max = i;
      } else if (sus[i] > sus[max2]) {
        max2 = i;
      }
    }

    printf("%d\n", max2 + 1);
  }

  return 0;
}
