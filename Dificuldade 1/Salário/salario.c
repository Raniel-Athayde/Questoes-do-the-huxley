#include <stdio.h>

int funcionario, horas;
double dinheiro;

double calculo(int horas, double dinheiro)
{
    return (horas * dinheiro);
}
main()
{
scanf("%d %d %lf", &funcionario, &horas, &dinheiro);
printf("NUMBER = %d\nSALARY = R$ %.2lf\n",funcionario, calculo(horas, dinheiro));
return 0;
}