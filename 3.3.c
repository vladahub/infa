#include <stdio.h>
#include <stdlib.h>
int function(int n)
{
    int s;
    if (n==1) return 1;
    if (n==2) return 1;
    s=function(n-1)+function(n-2);
    return(s);
}

int main()
{
    int n,s;
    scanf("%d", &n);
    s = function(n);
    printf("%d",s);
    return 0;
}
