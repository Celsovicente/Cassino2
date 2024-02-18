#include <stdio.h>
#include <stdlib.h>
#define ERRO 1.0e-7

//declaracao das funcoes
float modulo(float x);
int fatorial(int n);
float potencia(int base, int expoente);
float seno(float x);
float arrendodar(float z);
float converterDecimal(float x);
int gerarNumeroAleatorio();
int lerSemente();
float lerQuantidade();
int lerNumeroApostado();
int somaDigitos(int n);
int capicua(int n);
int inverso(int num, int num2);
int acertarUnidade(int num, int num2);
int acertarDezena(int num, int num2);
int acertarUnidadeDezena(int num, int num2);
int parOuImpar(int n);
float calcularLucro(float lucro, float prejuizo);

// funcionamento das funcoes para gerar numero
int lerSemente()
{
	int n, flag = 0;
	while(flag == 0)
	{
		printf("\n Digite um numero para a semente:\n");
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

int lerNumeroApostado()
{
	int n, flag = 0;
	while(flag == 0)
	{
		printf("\n Digite o numero a ser apostado:\n");
		scanf("%d",&n);
		if(n < 1)
		{
			printf("\n Erro, valor invalido!");
		}
		else if(n > 50)
		{
			printf("\n Erro, valor invalido!");
		}
			else
			{
				flag = 1;
			}		
	}
	return n;
}

float lerQuantidade()
{
	int flag = 0;
	float quantidade;
	while(flag == 0)
	{
		printf("\n Digite a quantia apostada:\n");
		scanf("%f",&quantidade);
		if(quantidade < 1.0)
		{
			printf("\n Erro, valor invalido!");
		}
			else
			{
				flag = 1;
			}		
	}
	return quantidade;
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

float seno(float x)
{
    float atual = 0.0 , anterior, seno;
    int i = 1, j = 1, flag = 1;
 
	if(x != 0)
	{
	    while(flag == 1)
	    {
		    
			if(i%2 == 0)
			{
			    atual -=  potencia(x,(j + 2)) / fatorial((j + 2));
   			    if(modulo(atual - anterior) < ERRO)
			   {
					 flag = 0;
		       	}
			}
			else
			{
		  	    anterior +=  potencia(x, (j + 2))/ fatorial((j + 2));
			} 
			i++;
		}
	}
	
return atual;
}

// funcao para gerar numero
int gerarNumero()
{
	int x, n;
	float y, Y, z;
	x = lerSemente();
	y = converterDecimal(x);
	z = 9821.0 * modulo(seno(y) + 0.211327);
	Y = z - arredondar(z);
	n = (int)(y* 50 + 1);
	return n;
}

// funcoes para as regras
int capicua(int n)
{
	int unidade, dezena, a;
	if(n > 9)
	{
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
	else
	{
		a = 0;
		return a;
	}
		
}

int inverso(int num, int num2)
{
	int inverso, a;
	if(num > 9)
	{
		if(num2 > 9)
		{
			if((num % 10) == (num2 / 10))
			{
				if((num / 10) == (num2 % 10))
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
			else
			{
				a = 0;
				return a;
			}
		}
		else 
		{
			a = 0;
			return a;
		}
	}
	else
	{
		a = 0;
		return a;	
	}
}

int acertarUnidade(int num, int num2)
{
	int a;
	if(num > 9)
	{
		if(num2 > 9)
		{
			if((num % 10) == (num2 %10))
			{
				a = 1;
				return a;
			}
			else if((num % 10) == (num2 / 10))
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
		else
		{
			a = 0;
			return a;
		}
	}
	else
	{
		if(num2 > 9)
		{
			if(num == (num2 %10))
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
	}
}

int acertarDezena(int num, int num2)
{
	int a;
	if(num > 9)
	{
		if(num2 > 9)
		{
			if((num / 10) == (num2 / 10))
			{
				a = 1;
				return a;
			}
			else if((num % 10) == (num2 / 10))
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
		else
		{
			a = 0;
			return a;
		}
	}
	else 
	{
			if(num  == (num2 / 10))
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
}

int acertarUnidadeDezena(int num, int num2)
{
	int a;
	if(num <= 9)
	{
		if(num2 > 9)
		{
			if(num == (num2 / 10))
			{
				if(num == (num2 % 10))
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
			else
			{
				a = 0;
				return a;
			}
		}
		else
		{
			a = 0;
			return a;
		}
	}
	else
	{
		a = 0;
		return a;
	}
}

int somaDigitos(int n)
{
	int soma, unidade, dezena, a;
	if(n > 9)
	{
		unidade = n % 10;
		dezena = n / 10;
		soma = unidade + dezena;
		return soma;
	}	
}

int parOuImpar(int n)
{
	int a;
	if(a % 2 == 0)
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

float calcularLucro(float lucro, float prejuizo)
{
	if(lucro > prejuizo)
	{
		lucro-= prejuizo;
		return lucro;
	}
	else if(lucro == prejuizo)
	{
		lucro = prejuizo = 0;
		return lucro;
	}
	else
	{
		prejuizo = prejuizo - lucro;
		return prejuizo;
	}
}

int main(int argc, char *argv[]) 
{
	int numeroSorteado, numeroApostado, flag = 1;
	float lucro, prejuizo, quantia;
	char resposta;
	numeroSorteado = gerarNumero();
	while(resposta != 'n')
	{
		quantia = lerQuantidade();
		numeroApostado = lerNumeroApostado();
		if(numeroApostado == numeroSorteado)
		{
			if(capicua(numeroSorteado) == 1)
			{
				lucro = (quantia * 7);
				calcularLucro(lucro, prejuizo);
				printf("---------------------------------------------");
				printf("\n Acertou no numero sorteado");
				printf("\n Numero sorteado eh capicua");
				printf("\n Numero sorteado: %d", numeroSorteado);
				printf("\n Numero apostado: %d", numeroApostado);
				printf("\n Valor apostado: %.2f Kz", quantia);
				printf("\n Cassino paga: %.2f KZ", lucro);
			}
			else if(capicua(numeroSorteado) == 0)
			{
				lucro = (quantia * 6);
				calcularLucro(lucro, prejuizo);
				printf("---------------------------------------------");
				printf("\n Acertou no numero sorteado");
				printf("\n Numero sorteado nao eh capicua");
				printf("\n Numero sorteado: %d", numeroSorteado);
				printf("\n Numero apostado: %d", numeroApostado);
				printf("\n Valor apostado: %.2f Kz", quantia);
				printf("\n Cassino paga: %.2f KZ", lucro);
			}
		}
		
		else if(acertarUnidadeDezena(numeroApostado, numeroSorteado) == 1)
		{
			lucro = (quantia * 5);	
			calcularLucro(lucro, prejuizo);				
			printf("---------------------------------------------");
			printf("\n Nao acertou no numero sorteado!");
			printf("\n Acertou no digito da unidade e no valor da dezena");
			printf("\n Numero sorteado: %d", numeroSorteado);
			printf("\n Numero apostado: %d", numeroApostado);
			printf("\n Valor apostado: %.2f Kz", quantia);
			printf("\n Cassino paga: %.2f KZ", lucro);
		}
		
		else if(acertarDezena(numeroApostado, numeroSorteado) == 1)
		{
			lucro = (quantia * 4);	
			calcularLucro(lucro, prejuizo);				
			printf("---------------------------------------------");
			printf("\n Nao acertou no numero sorteado!");
			printf("\n Acertou no digito da dezena");
			printf("\n Numero sorteado: %d", numeroSorteado);
			printf("\n Numero apostado: %d", numeroApostado);
			printf("\n Valor apostado: %.2f Kz", quantia);
			printf("\n Cassino paga: %.2f KZ", lucro);
		}
		else if(acertarUnidade(numeroApostado, numeroSorteado) == 1)
		{
			lucro = (quantia * 4);	
			calcularLucro(lucro, prejuizo);				
			printf("---------------------------------------------");
			printf("\n Nao acertou no numero sorteado!");
			printf("\n Acertou no digito da unidade");
			printf("\n Numero sorteado: %d", numeroSorteado);
			printf("\n Numero apostado: %d", numeroApostado);
			printf("\n Valor apostado: %.2f Kz", quantia);
			printf("\n Cassino paga: %.2f KZ", lucro);
		}
		else if(inverso(numeroApostado, numeroSorteado) == 1)
		{
			if(parOuImpar(numeroSorteado) == 1)
			{
				lucro = (quantia * 3);	
				calcularLucro(lucro, prejuizo);				
				printf("---------------------------------------------");
				printf("\n Nao acertou no numero sorteado!");
				printf("\n Acertou no numero sorteado na ordem inversa");
				printf("\n Numero sorteado: %d", numeroSorteado);
				printf("\n Numero apostado: %d", numeroApostado);
				printf("\n Valor apostado: %.2f Kz", quantia);
				printf("\n Cassino paga: %.2f KZ", lucro);
			}
			else
			{
				lucro = (quantia * 2);	
				calcularLucro(lucro, prejuizo);	
				printf("---------------------------------------------");			
				printf("\n Nao acertou no numero sorteado!");
				printf("\n Acertou no numero sorteado na ordem inversa");
				printf("\n Numero sorteado: %d", numeroSorteado);
				printf("\n Numero apostado: %d", numeroApostado);
				printf("\n Valor apostado: %.2f Kz", quantia);
				printf("\n Cassino paga: %.2f KZ", lucro);
			}
		}
		else if(numeroApostado == somaDigitos(numeroSorteado))
		{
			lucro = quantia;	
			calcularLucro(lucro, prejuizo);		
			printf("---------------------------------------------");		
			printf("\n Nao acertou no numero sorteado!");
			printf("\n Acertou na soma dos seus digitos");
			printf("\n Numero sorteado: %d", numeroSorteado);
			printf("\n Numero apostado: %d", numeroApostado);
			printf("\n Valor apostado: %.2f Kz", quantia);
			printf("\n Cassino paga: %.2f KZ", lucro);
		}
		else
		{
			prejuizo = quantia;	
			calcularLucro(lucro, prejuizo);	
			printf("---------------------------------------------");			
			printf("\n Nao acertou em nada, voce perdeu!");
			printf("\n Numero sorteado: %d", numeroSorteado);
			printf("\n Numero apostado: %d", numeroApostado);
			printf("\n Valor apostado: %.2f Kz", quantia);
			printf("\n Jogador perdeu: %.2f KZ", prejuizo);
		}
			printf("\n Deseja continuar?\n s-Sim n-Nao\n");
			scanf(" %c",&resposta);
				while (flag)
				{
			        if (resposta != 's') 
					{
			            if (resposta != 'n') 
						{
			                printf("Resposta invalida. Por favor, digite 's' para Sim ou 'n' para Nao: ");
			                scanf(" %c", &resposta);
			            } 
						else 
						{
			                flag = 0;
			            }
			        } 
					else 
					{
			            flag = 0;
			        }			
        		}
	}
	return 0;
}
