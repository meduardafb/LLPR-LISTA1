#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");


	float media, soma, a, b,c ,d  ;
	
	printf("Multiplicação ");

	printf("Informe: a\n");
	scanf("%f",&a);

	printf("Informe: b\n");
	scanf("%f",&b);
	
	printf("Informe: c\n");
	scanf("%f",&c);
	
	printf("Informe: d\n");
	scanf("%f",&d);

	
	media= (a*b*c*d)/1;
	
	
	printf("O produto entre os números: %f, %f, %f, %f foi: %f\n",a ,b ,c ,d ,media);
	
	return 0;

}
 
