/* 
O programa atribui 20 valores pseudo-aleat�rios entre 0 e 31 a uma array, apresenta eles e, em seguida, apresenta o maior deles.

Por Gabriel Couto de Freitas em 2021 
*/
#include <stdio.h> //Inclus�o de biblioteca de funcoes basicas em C
#include <stdlib.h> //Inclus�o de biblioteca de funcoes basicas em C
#include <time.h> //Inclus�o de biblioteca para uso da fun��o time()
#include <locale.h> //Inclus�o de biblioteca de linguagens

#define q 20 //Defini��o do tamanho do array

int main()
{
	setlocale(LC_ALL, "Portuguese"); // Declara��o de idioma usado, para utiliza��o de acentos.
	
	int r[q]; //Array que ser� utilizada para captar os n�meros pseudo aleat�rios
	int c; //Contador que servir� para zerar os valores do array
	
	srand(time(0)); // Fun��o time pega o hor�rio em segundos do computador e atribui � semente do fun��o srand
	
	for ( c = 0;c<q;c++){ //For usado para zerar o array e logo em seguida atribuir um valor pseudo aleat�rio a ele
		r[c]=0; // Zera cada posi��o do array
		r[c]=rand()%32; //Atribui um valor pseudo aleat�rio para cada posi��o do array
		
		printf("O %d� n�mero �: %d\n",c+1,r[c]); 
		
		if (r[0]<r[c]){ // Realiza o teste para ver se o n�mero em questao � o maior, 
			r[0]=r[c];  // se nao for, atribui esta posi��o ao primeiro elemento da array e repete o teste.
		}	
	}
	printf("\nO maior n�mero obtido foi: %d\n",r[0]);
	
	return 0;  //Encerra o programa e retorna o valor 0
}
