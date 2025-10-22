#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int livros, alunos;

    scanf("%d %d", &livros, &alunos);

    if (alunos / livros > (18) )
    {
        printf("D");
    }
    else if (alunos / livros >= (13) )
    {
        printf("C");
    }
    else if (alunos / livros >= (9) )
    {
        printf("B");
    }
    else
    {
        printf("A");
    }
    
    return 0;
}
