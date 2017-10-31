#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, f = 0;

// гарантируется, что n - натуральное

    scanf("%d", &n);

    if (n < 0)
    {
        printf("simple");
        f = 1;
        return;
    }

    if (n == 0 || abs(n) == 1)
    {
        printf("not simple");
        f = 1;
        return;
    }

    for ( i = 2; i < n; i++)
    {
        if (n % i == 0) f = f + 1;
    }


    if (f == 0)
    {
        printf("simple");
    }

    else
    {
        printf("not simple");
    }

    return 0;
}


