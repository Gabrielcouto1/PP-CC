/* 
O programa captura valores digitados pelo usu�rio e apresenta a m�dia entre eles.
O programa s� ir� parar quando o usu�rio digitar o valor 0.

Por Gabriel Couto de Freitas em 2021 */

#include <stdio.h> //Inclus�o de biblioteca de funcoes basicas em C

#include <locale.h> //Inclus�o de biblioteca de linguagens

int main()
{
	setlocale(LC_ALL, "Portuguese"); // Declara��o de idioma usado, para utiliza��o de acentos.
	
	int n=1;						//Vari�vel que ir� capturar o n�mero digitado pelo usu�rio.
	int c=0;						//Vari�vel auxiliar que servir� para contar a quantidade de n�meros digitados pelo usu�rio
	float s=0;						//Vari�vel que ir� armazenar a soma de todos n�meros digitados pelo usu�rio
	float med=0;					//Vari�vel que ir� armazenar a m�dia de todos n�meros digitados pelo usu�rio
	
	printf("Insira n�meros que voc� deseja calcular a m�dia entre. Quando quiser encerrar, digite o n�mero 0.\n");
	
	while (n!=0){					//La�o de repeti��o para verificar se o n�mero inserido � diferente de 0
		scanf("%d",&n);				//Cada vez que n�o for 0, ele captura um novo n�mero
		
		if (n!=0){					//Verifica se, depois da inser��o do n�mero ele � diferente de 0	
			s=s+n;					//Se n�o for 0, atribui o n�mero � somat�ria que ir� ser usada no c�lculo da m�dia
			c++;					//Contador que representa a quantidade de n�meros diferentes de 0 inseridos
		}
	}
	
	if(c==0){						//Verifica se o primeiro n�mero inserido � igual a 0
	printf("\nVoc� n�o digitou nenhum n�mero al�m do 0.\n");
	return 3;						//Encerra o programa e apresenta o valor 3, j� que � imposs�vel dividir por 0 
	}
	
	med=s/c;						//Calcula a m�dia dos n�meros inseridos, que � a somat�ria dividido pela quantidade de n�meros
	printf("A m�dia dos n�meros digitados � igual a: %.2f\n",med);	//Apresenta a m�dia com 2 casas decimais

	return 0;  //Encerra o programa e retorna o valor 0
}
