#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double F;
    
    scanf("%lf", &F);
    
    printf("%.2lf", ((F - 32) / 1.8));
	return 0;
}