#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);

  for (int x = 0; x < t; x++) {
    int num;
    scanf("%d", &num);

    int ply[num];
    for (int j = 0; j < num; j++) {
      scanf("%d", &ply[j]);
    }

    int ldr = num / 2;
    printf("Case %d: %d\n", x + 1, ply[ldr]);
  }

  return 0;
}
