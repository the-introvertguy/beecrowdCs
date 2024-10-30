#include <stdio.h>

int main() {
  int N, Q;

  while (scanf("%d %d", &N, &Q) != EOF) {
    int citizen[100];

    for (int i = 0; i < N; i++) {
      scanf("%d", &citizen[i]);
    }

    for (int i = 0; i < N - 1; i++) {
      int max_idx = i;
      for (int j = i + 1; j < N; j++) {
        if (citizen[j] > citizen[max_idx]) {
          max_idx = j;
        }
      }

      int temp = citizen[max_idx];
      citizen[max_idx] = citizen[i];
      citizen[i] = temp;
    }

    int enq;
    for (int i = 0; i < Q; i++) {
      scanf("%d", &enq);
      printf("%d\n", citizen[enq - 1]);
    }
  }

  return 0;
}
