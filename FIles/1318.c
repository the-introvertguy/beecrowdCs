#include <stdio.h>

int main() {
  int N, M;
  while (1) {
    scanf("%d %d", &N, &M);
    if (N == 0 && M == 0) {
      break;
    }

    int ar[10001] = {0};
    int x, i, cnt = 0;

    for (i = 0; i < M; i++) {
      scanf("%d", &x);
      ar[x]++;
    }

    for (i = 1; i <= N; i++) {
      if (ar[i] > 1) {
        cnt++;
      }
    }

    printf("%d\n", cnt);
  }
  return 0;
}
