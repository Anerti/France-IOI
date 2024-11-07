#include <stdio.h>
#include <math.h>

int main()
{
    int longueurMax;
    scanf("%d", &longueurMax);
    int x = 0;
    int y = 1;
    int z = 2;
    while (z <= longueurMax)
    {
        if (pow(z, 2) == pow(y, 2) + pow(x, 2))
        {
            printf("%d %d %d\n", x, y, z);
        }
        z++;
        if (z == longueurMax + 1)
        {
            y++;
            z = y + 1;
        }
        if (y == longueurMax && z == longueurMax + 1)
        {
            x++;
            y = x + 1;
            z = y + 1;
        }
    }
    return 0;
}
