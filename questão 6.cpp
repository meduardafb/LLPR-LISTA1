#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");


	float soma, a, b ;
	
	printf("Soma ");

	printf("Informe: \n");
	scanf("%f",&a);

	printf("Informe: \n");
	scanf("%f",&b);
	
	soma= a+b;

	printf("O resultado da soma entre os dois n�meros foi: %f, %f,foi: %f\n",a ,b ,soma);
	
	float subtracao, c;
	
	printf("Subtra��o ");
	
	printf("Informe: \n");
	scanf("%f", &c);
	
	subtracao= soma - c;
	
	printf("O resultado da subtra��o entre os dois n�meros foi: %f, %f,foi: %f\n",soma ,c ,subtracao);
	
	
	
	return 0;

}
