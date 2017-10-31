#include <stdio.h>
#include <stdlib.h>

int factorial (int n)
{
    int i, f = 1;
    for(i = 1; i <= n; i++)
    f = f * i;
    return f;
}

int stirling(int k, int n)
{
    return factorial(n)/(factorial(k)*factorial(n-k));
}

int main()
{
    int i,n;
    scanf("%d", &n);

    for(i = 0; i <= n; i++)
    {
        printf("%d ", stirling(i, n));
    }

    return 0;
}
