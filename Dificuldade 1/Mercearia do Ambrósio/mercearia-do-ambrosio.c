#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int produto;
    double quantidade, preco;

    scanf("%d %lf", &produto, &quantidade);

    if(produto == 1)
    {
        preco = (quantidade * 5.30);
    }
    else if(produto == 2)
    {
        preco = (quantidade * 6);
    }
    else if(produto == 3)
    {
        preco = (quantidade * 3.20);
    }
    else if(produto == 4)
    {
        preco = (quantidade * 2.50);
    }

    if (preco >= 40 || quantidade >= 15)
    {
       preco = (preco * 0.85);
    }

    printf("R$ %.2lf", preco);
	return 0;
}