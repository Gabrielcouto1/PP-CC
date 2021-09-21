/* 
Por Gabriel Couto de Freitas em 2021 */

#include <stdio.h> //Inclus�o de biblioteca de funcoes basicas em C
#include <stdlib.h> //Inclus�o de biblioteca de funcoes basicas em C
#include <time.h> //Inclus�o de biblioteca para uso da fun��o time()
#include <locale.h> //Inclus�o de biblioteca de linguagens

#define t 30 //Tamanho do array

int main()
{
	setlocale(LC_ALL, "Portuguese"); // Declara��o de idioma usado, para utiliza��o de acentos.
	
	unsigned char s[t]; //String para armazenar o nome	
	
	scanf ("%[^\n]",s); // Captura tudo com espa�os brancos
	
	printf("Nome digitado = %s\n",s);

	return 0;  //Encerra o programa e retorna o valor 0
}
