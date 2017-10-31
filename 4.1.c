#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);

    int mass[10000], masm[100000];
    int i, j;

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &masm[i], &mass[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; i++)
        {
            if ( mass[j] > mass[j + 1])
            {
                int a = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = a;

                int b = masm[j];
                masm[j] = masm[j + 1];
                masm[j + 1] = b;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        int s = 0;

        for (j = 0; j < i; j++)
        {
            s += masm[j];
        }

        if (s > mass[i])
        {
            i++;
        }
        else
        {
             printf("%d %d\n", masm[i], mass[i]);
        }
    }
    return 0;
}
