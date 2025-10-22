#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int x, y;
    int a, b, c, d, e, f;
    scanf("%d %d", &x, &y);

    if (x == y)
    {
        a = 0;
        b = 1;
        c = 0;
        d = 0;
        e = 1;
        f = 1;
    }
    else if (x > y)
    {
        a = 1;
        b = 0;
        c = 0;
        d = 1;
        e = 1;
        f = 0;
    }
    else 
    {
        a = 0;
        b = 0;
        c = 1;
        d = 1;
        e = 0;
        f = 1;
    }
    
    printf ("%d\n%d\n%d\n%d\n%d\n%d\n", a, b, c, d, e, f);
    
	return 0;
}