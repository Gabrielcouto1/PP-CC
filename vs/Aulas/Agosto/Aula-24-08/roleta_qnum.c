/* Apresentar o resultado de N lan�amentos pseudoaleat�rios de uma roleta que possui q n�meros(ambos digitados pelo usu�rio).
O programa deve apresentar a qtd de vezes que cada n�mero da roleta foi sorteado.
N � um n�mero natural e digitado pelo usu�rio.
O n�mero do resultado � apresentado com 5 n�meros por linha.
Por Gabriel Couto de Freitas em 2021 */

#include <stdio.h> //Inclus�o de biblioteca de funcoes basicas em C
#include <stdlib.h> //Inclus�o de biblioteca de funcoes basicas em C
#include <time.h> //Inclus�o de biblioteca para uso da fun��o time()
#include <locale.h> //Inclus�o de biblioteca de linguagens



int main()
{
	setlocale(LC_ALL, "Portuguese"); // Declara��o de idioma usado, para utiliza��o de acentos.

	int n=0; // N�mero de lan�amentos digitado pelo usu�rio
	int l=0; // Vari�vel que dir� qual n�mero da roleta caiu
	int c; // Contador usado para zerar o vetor de n�meros da roleta
	int t=1; //Contador auxiliar para escrever 5 n�meros por linha no final
	int q=0; // Quantidade de n�meros na roleta
	
	printf("Insira a quantidade de n�meros presentes na roleta:  ");
	scanf("%d",&q);
	
	int r[q]; // N�meros da roleta

	for(c=0;c<q;c++){ //Zerar todos valores do vetor r
		r[c]=0;
	}
	printf("\nInsira um n�mero natural N de vezes que a roleta ir� rodar:  ");
	scanf("%d",&n);

	srand(time(NULL)); // Pega a seed do horario do computador
	
	printf("\nN�mero de lan�amentos da roleta:  %d\n\n",n);
	
	for(n;n>0;n--){ // Verifica quantas vezes cada n�mero foi sorteado
		l=rand()%q;
		r[l]++;
	}
	
	l=0;
	while (l<q){ // Condi��es a serem seguidas e testadas para imprimir a quantidade certa de resultados por linha na tela
		if (q>=10){
			while(l<9){
			if(t%5!=0){
				printf("N�m 0%d:  %d    ",l+1,r[l]);
			}
			else if (t%5==0){
				printf("N�m 0%d:  %d    \n",l+1,r[l]);
				}
			l++;
			t++;
			}
		}
		
		if(t%5!=0){
			printf("N�m %d:  %d    ",l+1,r[l]);
		}
		else if (t%5==0){
			printf("N�m %d:  %d    \n",l+1,r[l]);
		}
		l++;
		t++;
	}
	
	return 0;  //Encerra o programa e retorna o valor 0
}
