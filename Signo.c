#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int dia, mes;
    
	printf ("Digite seu dia de nascimento(somente numeros): ");
    scanf ("%i", &dia);
    printf ("Digite seu mes de nascimento(somente numeros): ");
    scanf ("%i", &mes);
    
    if (mes == 1 )
    {
    	if (dia>=21 && dia <=31)
    	{
    		printf ("Seu signo e Aquario\n");
		}
		else if (dia<21)
		{
			printf ("Seu signo e Capricornio\n");
		}
	}
	if (mes == 2)
	{
		if (dia>=19 )
		{
			printf ("Seu signo: Peixes\n");
		}
		else if (dia < 19)
		{
			printf ("Seu signo: Aquario\n");
		}
	}
	if (mes == 3)
	{
		if (dia>=21)
		{
			printf ("Seu signo: Aries\n");
		}
		else if (dia<21)
		{
			printf ("Seu signo: Peixes\n");
		}
	}
	if (mes == 4)
	{
		if (dia>=21)
		{
			printf ("Seu signo: Touro\n");
		}
		else if (dia<21)
		{
			printf ("Seu signo: Aries\n");
		}
	}
	if (mes ==5)
	{
		if (dia>=21)
		{
			printf ("Seu signo: Gemeos\n");
		}
		else if (dia<21)
		{
			printf ("Seu signo: Touro\n");
		}
	}
	if (mes == 6)
	{
		if (dia>=21)
		{
			printf ("Seu signo: Touro\n");
		}
		else if (dia <=20)
		{
			printf ("Seu signo: Gemeos\n");
		}
	}
	if (mes == 7)
	{
		if (dia >= 23)
		{
			printf ("Seu signo: Leao\n");
		}
		else if (dia<23)
		{
			printf ("Seu signo: Cancer\n");
		}
	}
	if (mes == 8)
	{
		if (dia>=23)
		{
			printf ("Seu signo: Virgem\n");
		}
		else if (dia<23)
		{
			printf ("Seu signo: Leao\n");
		}
	}
	if (mes == 9)
	{
		if (dia >= 23)
		{
			printf ("Seu signo: Libra\n");
		}
		else if (dia <23)
		{
			printf ("Seu signo: Virgem\n");
		}
	}
	if (mes ==10)
	{
		if (dia>=23)
		{
			printf ("Seu signo: Escorpiao\n");
		}
		else if (dia<23)
		{
			printf ("Seu signo: Libra\n");
		}
	}
	if (mes == 11)
	{
		if (dia>=22)
		{
			printf ("Seu signo: Sagitario\n");
		}
		else if (dia <22)
		{
			printf ("Seu signo: Escorpiao\n");
		}
	}
	if (mes == 12)
	{
		if (dia >= 22)
		{
			printf ("Seu signo: Capricornio\n");
		}
		else if (dia<22)
		{
			printf ("Seu signo: Sagitario\n");
		}
	}
	return 0;
	
}