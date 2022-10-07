#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");


	float media, soma, a, b,c ;
	
	printf("Medias");

	printf("Informe: a\n");
	scanf("%f",&a);

	printf("Informe: b\n");
	scanf("%f",&b);
	
	printf("Informe: c\n");
	scanf("%f",&c);

	
	media= a+b+c/3;
	
	
	printf("O Valor Calculado da Media entre os números: %f, %f, %f foi: %f\n",a ,b ,c ,media);
	
	return 0;

}

#A média não foi calculada corretamente, pois sem os parênteses o computador entende que o número a ser dividido é apenas o "c", e nã

