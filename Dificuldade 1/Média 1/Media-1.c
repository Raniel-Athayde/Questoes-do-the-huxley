double media(double a, double b)
{
    return(((a * 3.5) + (b * 7.5)) / 11);
}

int main() 
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("MEDIA = %.5lf", media(a, b) );
	return 0;
}