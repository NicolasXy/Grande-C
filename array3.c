#include<stdio.h>
#include<locale.h>

main (){
	setlocale(LC_ALL, "Portuguese");
	int i; 
	float notas[5];
	
	printf("Me diga os valores do array \n \n");
	for(i=0; i<4; i=i+1){
		printf("Entre com a nota notas[%d]: ", i);
		scanf("%f", &notas[i]);
	}
	for(i=0; i<=4; i=i+1){
		printf("notas[%d] = %f \n]", i, notas[i]);
	}
	system("pause");
}
