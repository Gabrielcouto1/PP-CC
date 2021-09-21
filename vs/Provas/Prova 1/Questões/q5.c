/* 
O programa armazena em um array Q n�meros aleat�rios baseados no hor�rio atual do computador.
Em seguida apresenta os n�meros na ordem em que foram obtidos.
Apresenta os n�meros na ordem contr�ria em que foram obtidos.
Apresenta a soma de todos n�meros �mpares obtidos no sorteio.

Por Gabriel Couto de Freitas em 2021 */

#include <stdio.h> //Inclus�o de biblioteca de funcoes basicas em C
#include <stdlib.h> //Inclus�o de biblioteca de funcoes basicas em C
#include <time.h> //Inclus�o de biblioteca para uso da fun��o time()
#include <locale.h> //Inclus�o de biblioteca de linguagens

#define q 10

int main()
{
	setlocale(LC_ALL, "Portuguese"); // Declara��o de idioma usado, para utiliza��o de acentos.
	
	int n[q];				//Array com tamanho 10, definido previamente, que ir� armazenar os valores aleat�rios
	int c;					//Contador auxiliar utilizado nos la�os de repeti��o	
	int s=0;				//Vari�vel que ir� armazenar os valores �mpares gerados
	
	srand(time(NULL));		//Estabelecendo a semente para a fun��o rand() com o valor em segundos da hora do computador
	
	for (c=0;c<q;c++){		//La�o de repeti��o que ser� usado para as seguintes opera��es:
		n[c]=0;				//Zera todos elementos do array
		
		n[c]=rand()%24;		//Atribui um valor aleat�rio para cada elemento da array
		
		printf("O %d� n�mero sorteado �:  %d\n",c+1,n[c]);		//Escreve na tela cada valor do array, na ordem que foi sorteado
		
		if(n[c]%2!=0){ 			//Verifica se cada valor da array � �mpar
			s=s+n[c];			//Se for �mpar armazena na vari�vel da soma dos n�meros �mpares
		}
	}
	
	printf("\n\n");
	
	for (c=q;c>0;c--){			//La�o que foi usado para apresentar a ordem contr�ria dos n�meros sorteados
		printf("O %d� n�mero sorteado �:  %d\n",c,n[c-1]);
	}
	
	printf("\n\nA soma dos n�meros �mpares sorteados �: %d\n",s);			//Apresenta a soma dos n�meros �mpares sorteados
	
	
	return 0;  //Encerra o programa e retorna o valor 0
}
