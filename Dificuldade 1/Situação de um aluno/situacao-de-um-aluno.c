#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double media (int a, int b, int c)
{
    return ((a + b + c) / 3.00);
}

int main() 
{
    int a, b ,c;
    scanf("%d %d %d", &a, &b, &c);

    if (media(a, b, c) < 0) 
    {
        printf("Media invalida");
    }
    else if (media(a, b, c) <= 40)
    {
        printf("A media do aluno foi %.2lf e ele foi REPROVADO", media(a, b, c));
    }
    else if (media(a, b, c) < 70)
    {
        printf("A media do aluno foi %.2lf e ele foi FINAL", media(a, b, c));
    }
    else if (media(a, b, c) <= 100)
    {
        printf("A media do aluno foi %.2lf e ele foi APROVADO", media(a, b, c));
    }
    else
    {
        printf("Media invalida");
    }

    

	return 0;
}