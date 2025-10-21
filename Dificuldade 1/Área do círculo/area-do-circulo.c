#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double raio;
    scanf("%lf", &raio);
    printf("Area = %.4lf",(((raio * raio) * 3.14159 ) / 10000));
	return 0;
}