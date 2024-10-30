#include <stdio.h>

int main() {
  int num[15];
  int i, j;

  for (i = 0; i < 15; i++) {
    scanf("%d", &num[i]);
  }

  int even[5], odd[5];
  int evenCount = 0, oddCount = 0;

  for (i = 0; i < 15; i++) {
    if (num[i] % 2 == 0) {
      even[evenCount++] = num[i];
    } else {
      odd[oddCount++] = num[i];
    }

    if (evenCount == 5) {
      for (j = 0; j < 5; j++) {
        printf("par[%d] = %d\n", j, even[j]);
      }
      evenCount = 0;
    }

    if (oddCount == 5) {
      for (j = 0; j < 5; j++) {
        printf("impar[%d] = %d\n", j, odd[j]);
      }
      oddCount = 0;
    }
  }
  for (i = 0; i < oddCount; i++) {
    printf("impar[%d] = %d\n", i, odd[i]);
  }
  for (i = 0; i < evenCount; i++) {
    printf("par[%d] = %d\n", i, even[i]);
  }

  return 0;
}
