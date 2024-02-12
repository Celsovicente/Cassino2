#include <stdio.h>
#include <stdlib.h>

// declarações de funções 
int modulo(int n);
int fatorial(int n);
int potencia(int base, int expoente);
float seno();
float arrendodar();
int acertarNaoCapicua(int numSorteado, int numApostado);
int acertarCapicua(int numSorteado, int numApostado);
int acertarDezena(int numSorteado, int numApostado);
int acertarUnidade(int numSorteado, int numApostado);
int acertarUnidadeDezena(int numSorteado, int numApostado);
int ordemInversaPar(int numSorteado, int numApostado);
int ordemInversaImpar(int numSorteado, int numApostado);
int somaDosDigitos(int numSorteado, int numApostado);
float calcularLucro();

// funcionamento das funções
int modulo(int n)
{
	int aux;
		if( n < 0)
			aux = n * -1;
		else
			aux = n;
	return aux;
}

int fatorial(int n)
{
	int fat = 1, i; 
	if(n == 0)
		return fat;
		else
		{
			for(i = 1; i <= n; i++)
			fat*=i;
		}
	return fat;		
}

int potencia(int base, int expoente)
{
	int pot = 1, i;
	if(expoente == 0)
		pot = 1;
	else
	{
		for(i = 1; i <= expoente; i++)
		{
			pot*=base;
		}
	}
	return pot;
}

int acertarNaoCapicua(int numApostado, int numSorteado)
{
	
}

int acertarCapicua(int numApostado, int numSorteado)
{
	
}

int acertarDezena(int numApostado, int numSorteado)
{
	
}

int acertarUnidade(int numApostado, int numSorteado)
{
	
}

int acertarUnidadeDezena(int numApostado, int numSorteado)
{
	
}

int ordemInversaPar(int numApostado, int numSorteado)
{
	
}

int ordemInversaImpar(int numApostado, int numSorteado)
{
	
}

int somaDosDigitos(int numApostado, int numSorteado)
{
	float lucro;
	if(numApostado == ((numSorteado / 10) + (numSorteado % 10)))	
	
}

int main(int argc, char *argv[]) 
{
	
	return 0;
}
