#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); // Declara��o de idioma usado, para utiliza��o de acentos.
	system("cls");
	
	float x,y,div;
	
	printf("Insira um valor para o dividendo:  ");
	scanf("%f",&x);
	
	printf("\nInsira um valor para o divisor:  ");
	scanf("%f",&y);
	
	if (y==0){
		printf("\nO divisor informado � igual a 0, n�o � poss�vel dividir por 0.\nInsira outros valores\n\n");
		system("pause");  
		return main();
	}
	else {
		div= x/y;
		printf("\nO quociente da divis�o %.2f/%.2f � igual a %.2f\n",x, y, div);
	}		
	return 0;	
}
