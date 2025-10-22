#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && a == c)
    {
        printf("equilatero");
    }
    else if (a == b || a == c || b == c)
    {
        printf("isosceles");
    }
    else
    {
        printf("escaleno");
    }
	return 0;
}