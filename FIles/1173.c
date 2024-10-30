#include <stdio.h>

int main()
{

    int i[10];
    scanf("%d", &i[0]);
    printf("N[0] = %d\n", i[0]);

    int x;
    for (x = 1; x < 10; x++)
    {
        i[x] = i[x - 1] * 2;
        printf("N[%d] = %d\n", x, i[x]);
    }

    return 0;
}