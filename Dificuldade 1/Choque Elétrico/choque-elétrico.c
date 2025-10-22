#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int lvl;
    double p;
    
    scanf("%d", &lvl);
    
    if(lvl <= 20)
    {
        p = (20 + (pow(lvl, 3)));
    }
    else if (lvl <= 40)
    {
        p = (8000 + (pow((lvl - 10), 2)));
    }
    else if (lvl <= 60)
    {
        p = (9000 + ( 5 * lvl));
    }
    else if (lvl <= 80)
    {
        p = (9300 + (2 * lvl));
    }
    else if (lvl <= 100)
    {
        p = (9500 + lvl);
    }

    printf("Potencia de : %.0lf W", p);
    
	return 0;
}