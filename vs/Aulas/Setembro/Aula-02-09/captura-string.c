/* 

Por Gabriel Couto de Freitas em 2021 */

#include <stdio.h> //Inclus�o de biblioteca de funcoes basicas em C
#include <stdlib.h> //Inclus�o de biblioteca de funcoes basicas em C
#include <time.h> //Inclus�o de biblioteca para uso da fun��o time()
#include <locale.h> //Inclus�o de biblioteca de linguagens

#define tamanho 20
int main()
{
	setlocale(LC_ALL, "Portuguese"); // Declara��o de idioma usado, para utiliza��o de acentos.
	
    char string[tamanho];

	printf("Digite algo: \n");
    scanf("%[^\n]",string);
	
	printf("%s",string);
	return 0;  //Encerra o programa e retorna o valor 0
}
