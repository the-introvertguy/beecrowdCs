#include <stdio.h>

int main()
{

    int i[20];

    int x;
    for (x = 0; x < 20; x++)
    {
        scanf("%d", &i[19 - x]);
    }

    for (x = 0; x < 20; x++)
    {
        printf("N[%d] = %d\n", x, i[x]);
    }

    return 0;
}