#include <stdio.h>
#include <stdlib.h>

//простите, что скинула неготовую программу, не знаю, как так получилось...
int main()
{
    int n;
    int i;
    int f = 0;

    scanf("%d", &n);

    int a = 1, b = 1;

    for (i = 0; i < n - 2; i++)
    {
            f = a + b;
            a = b;
            b = f;
    }

    if ((n == 1) || (n == 2)) printf("1");
    else printf("%d", f);

    return 0;
}
