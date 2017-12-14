#include <stdio.h>
#include <stdlib.h>

//исправлено.

int isSimple (int n)
{
    if(n == 1 || n == 0) return 0;
    int i;
    for (i = 2; i < n; ++i)
    if (n != i && n % i == 0) return 0;

    return 1;

}

int main()
{
    int n;

    scanf("%d", &n);
    isSimple(n);
}
