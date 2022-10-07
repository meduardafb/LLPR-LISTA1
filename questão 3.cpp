#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");


	float media, soma, a, b ;
	
	printf("Medias");

	printf("Informe: a\n");
	scanf("%f",&a);

	printf("Informe: b\n");
	scanf("%f",&b);
	

	media= (a+b)/2;
	
	
	printf("O Valor Calculado da Media entre os números: %f, %f, foi: %f\n",a ,b ,media);
	
	return 0;

}
