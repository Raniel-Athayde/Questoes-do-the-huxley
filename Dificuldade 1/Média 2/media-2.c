#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double Media_Ponderada_de_3 (double A, double B, double C)
{
    return (((A * 2) + (B * 3) + (C * 5)) / 10);
}

double main() 
{
    double Nota_A, Nota_B, Nota_C;
    
    scanf("%lf%lf%lf", &Nota_A, &Nota_B, &Nota_C);

    printf("MEDIA = %.1lf\n", Media_Ponderada_de_3(Nota_A, Nota_B, Nota_C));
    
	return 0;
}