#include <stdio.h>
#include <stdlib.h>

// исправила всю программу, потому что та была неоправданно сложной. Массив действительно не нужен, тк мы можем проверять введенные значения сразу.
int main()
{
    int n;
    int max;
    int i;
    int number;

    scanf("%d", &n);

    scanf ("%d", &max);

    for(i = 1; i < n; i++)
    {
        scanf ("%d", &number);
        if (number >= max) {max = number;}
    }

    printf("result = %d\n", max);

    return 0;
}
