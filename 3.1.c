#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, f, i, a = 0;

    scanf("%d", &n);

    int my_array[n];

    for(i = 0; i < n; i++)
    {
        scanf ("%d", &my_array[i]);

        switch(a)
        {
            case 0:
            f = (my_array[0]);
            if (my_array[i] > f) f = my_array[i];
            a =1 ;
            break;

            case 1:
            if (my_array[i] > f) f = my_array[i];
            break;
        }

    }

    printf("result = %d\n", f);

    return 0;
}
