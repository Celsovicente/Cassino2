#include <stdio.h>
#include <stdlib.h>
#define ERRO 1.0e-7

//declaração das funções
int lerSemente();
int fatorial(int n);
float modulo(float x);
float arredondar(float z);
float seno();
float converterDecimal(float x);
float potencia(int base, int expoente);
int inverso(int n);
int capicua(int n);
int somaDigitos(int n);


// funcionamento das funcoes para gerar numero
int lerSemente()
{
	int n, flag = 0;
	while(flag == 0)
	{
		printf("\n Digite um numero:\n");
		scanf("%d",&n);
		if(n <= 0)
			printf("\n Erro, valor invalido!");
		else if(n > 9999999)
			printf("\n Erro, valor invalido!");
			else
			flag = 1;
	}
	return n;
}

float modulo(float x)
{
	if(x < 0.0)
	{
		return x = -x;
	}
	return x;
}

int fatorial(int n)
{
	int fat = 1, i;
	for(i = 1; i<= n; i++)
	fat*=i;
	return fat;
}

float potencia(int base, int expoente)
{
	float pot = 1.0;
	int i;
	if(expoente == 0)
		pot = 1;
	else if( expoente > 0)
	{
		for(i = 1; i<= expoente; i++)
		{
			pot*= base;
		}
	}
	else
	{
		for(i = 1; i <= expoente; i++)
		pot = 1 / (pot * base);
	}
	return pot;
}


float arredondar(float z)
{
	float decimal;
	int inteiro;
	inteiro = z;
	if(z < 0)
	{
		decimal = z - (int)z;
		if(decimal != 0)
		{
			if(inteiro > 0)
			{
				inteiro++;
			}
			else
			{
				inteiro--;				
			}
		}
	}
	return inteiro;
}

float converterDecimal(float x)
{
	
    float i = 10.0;
    while (x > 1.0) {
        x = x / i;
    }
    return x;
}


// funcoes para as regras
int capicua(int n)
{
	int unidade, dezena, a;
	unidade = n % 10;
	dezena = n / 10;
	if(dezena == unidade)
	{
		a = 1;
		return a;
	}
	else
	{
		a = 0;
		return a;
	}
}

int inverso(int n)
{
	int inverso;
	inverso = ((n % 10) * 10) + n / 10;
	return inverso;
}

int somaDigitos(int n)
{
	int soma, unidade, dezena;
	unidade = n % 10;
	dezena = n / 10;
	soma = unidade + dezena;
	return soma;	
}

int main(int argc, char *argv[]) 
{
	
	return 0;
}
