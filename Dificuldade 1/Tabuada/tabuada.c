#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int numero, multiplicador;

    multiplicador = 1;

    scanf("%d", &numero);

    while (multiplicador <= 9)
    {
    printf("%d X %d = %d\n", numero, multiplicador, numero * multiplicador );
    multiplicador++;
    }
	return 0;
}