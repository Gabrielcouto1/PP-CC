/*  
O programa captura o valor de N e M, maiores que 0 e inseridos pelo usu�rio. 
O programa realiza N opera��es de multiplica��o por M e apresenta a somat�ria.

Por Gabriel Couto de Freitas em 2021 */

#include <stdio.h> 						//Inclus�o de biblioteca de funcoes basicas em C
#include <locale.h> 					//Inclus�o de biblioteca de linguagens

int main()
{
	setlocale(LC_ALL, "Portuguese"); 	// Declara��o de idioma usado, para utiliza��o de acentos.
	
	int n=0;							//Vari�vel que armazenar� o primeiro valor inserido pelo usu�rio
	int m=0;							//Vari�vel que armazenar� o primeiro valor inserido pelo usu�rio
	int c=0;							//Contador utilizado no la�o de repeti��o
	int x=0;							//Vari�vel auxiliar para armazenar o valor tempor�rio no la�o while
	int t=0;							//Vari�vel que armazenar� o valor da somat�ria das multiplica��es no la�o while
	
	printf("\nInsira o valor para N: ");
	scanf("%d",&n); 					//Captura o valor de N
	
	printf("\nInsira o valor para M: ");
	scanf("%d",&m); 					//Captura o valor de M
	
	while (c<n){						//La�o while que realiza as opera��es enquanto o contador for menor que N
		x=x+m;							
		t=t+x;
		c++;
		}
		
	printf("\nc= %d   t=%d\n",c,t);		//Escreve na tela os valores do contador e da somat�ria

	return 0;  							//Encerra o programa e retorna o valor 0
}
