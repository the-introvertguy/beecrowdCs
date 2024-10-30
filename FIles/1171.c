#include <stdio.h>

int main() {
  int N, num;
  scanf("%d", &N);
  int ar[2001] = {0};
  for (int i = 0; i < N; i++) {
    scanf("%d", &num);
    ar[num]++;
  }

  for (int i = 0; i < 2001; i++) {
    if (ar[i] > 0) {
      printf("%d aparece %d vez(es)\n", i, ar[i]);
    }
  }
  return 0;
}