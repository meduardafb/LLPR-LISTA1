#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");


	int a, b;
	float quociente, resto;
	
	printf("Calculo do Quociente e do Resto ");

	printf("Informe: \n");
	scanf("%d",&a);

	printf("Informe: \n");
	scanf("%d",&b);
	
	
	quociente= a/b;
	resto= a%b;
	
	
	printf("Resultado da Divisão: %d, %d foi: %f Resultado do Resto: %f\n", a, b, quociente ,resto);
	
	return 0;

}
