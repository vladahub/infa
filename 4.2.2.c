#include <stdio.h>
#include <stdlib.h>

struct Segment
{
    int begin;
    int end;
};

void QuickSort(Segment *a, int begin, int end)
{
    int l = begin;
    int r = end;

    Segment middle.begin = a[(begin + end) / 2];

    do
    {
        while (a[l].begin < middle.begin) l++;
        while (middle.begin < a[r].begin) r--;

        if (l <= r)
        {
        swap(a[l].begin, a[r].begin);
        l++;
        r--;
        }
    }

    while (l <= r);

    if (r > begin)
    QuickSort(a, begin, r);

    if (l < end)
    QuickSort(a, l, end);

    }

int main()
{
    int n, i;
   // int begin = 0, end = 100000; //гарантируется, что отрезок покроется
    scanf("%d", &n);

    segment segments[100500];

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", segments[i].begin, segments[i].end);
    }

    QuickSort(segments[100500], 0, n - 1);

    int maxbegin = segments[0].begin;
    int maxend = segments[0].end;

    for (i = 1; i < n; i++)
    {
        if (segments[i].begin <= maxbegin)
        {
            if (segments[i].end >= maxend)
            {
                maxbegin = segments[i].begin;
                maxend = segments[i].end;
            }
        else
        {
            printf("%d %d\n", maxbegin, maxend);
            maxbegin = maxend;
            maxend = segments[i].end;
        }
        }
    }

    return 0;
}
