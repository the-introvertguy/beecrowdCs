
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, j, row, col, x, y, p, q, z = 0;

  while (scanf("%d %d", &row, &col) != EOF) {
    int mat[row][col];

    for (i = 0; i < row; ++i) {
      for (j = 0; j < col; ++j) {
        scanf("%d", &mat[i][j]);

        if (mat[i][j] == 1) {
          x = i;
          y = j;
        }

        if (mat[i][j] == 2) {
          p = i;
          q = j;
        }
      }
    }

    z = abs(x - p) + abs(y - q);

    printf("%d\n", z);
  }

  return 0;
}
