#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int     lgt_check (int n)
{
    int i;

    i = 1;
    while ((n /= 10) > 0)
        i++;
    return (i);
}

int    main()
{
    int i;

    i = 545455;
    printf("%d", lgt_check(i));
    return 0;
}