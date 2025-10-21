#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a, b, c, d;
int produto(int x, int y)
{
    return(x * y);
}

int diferenca(int x, int y)
{
    return(x - y);
}

int main() 
{
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("DIFERENCA = %d",(produto(a, b) - produto(c, d)));
	return 0;
}