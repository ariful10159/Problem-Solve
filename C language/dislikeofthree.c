#include <stdio.h>
int main()
{
    int n, i, k, count = 0, d = 0, j;
    scanf("%d", &k);
    for (j = 1; j <= k; j++)
    {
        scanf("%d", &n);
        count = 0;
        d=0;
        for (i = 1; i <= 2000; i++)
        {
            if (d == n)
                break;
            if (i % 3 != 0 && i % 10 != 3)
            {
                count++;
                d++;
            }

            else
                count++;
        }
        printf("%d\n", count);
    }
}