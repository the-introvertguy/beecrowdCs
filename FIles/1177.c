#include <stdio.h>

int main()
{

    int i[1000];
    int t;
    scanf("%d", &t);

    int x;
    for (x = 0; x < 1000; x++)
    {
        i[x] = x % t;
    }

    for (x = 0; x < 1000; x++)
    {
        printf("N[%d] = %d\n", x, i[x]);
    }

    return 0;
}