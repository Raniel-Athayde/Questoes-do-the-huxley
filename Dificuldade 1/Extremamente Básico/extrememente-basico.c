#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a, b;
int soma(int a, int b)
{
    return(a + b);
}
int main() 
{
    scanf("%d %d", &a, &b);
    printf("X = %d", soma(a, b));
	return 0;
}