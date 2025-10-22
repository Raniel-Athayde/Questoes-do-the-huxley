#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int sexo, idade;
    scanf("%d %d", &sexo, &idade);

    if (idade == 1 && sexo == 0)
    {
        printf("1");
    }
    else 
    {
        printf("0");
    }

	return 0;
}