#include<stdio.h>
#include<locale.h>


maximo(int valora, int valorb){
	if (valora == valorb){
		prinf("Por conta dos lados, isso � um quadrado! %d \n");
	} else{
		prinf("Por conta dos lados, isso � um ret�ngulo! %d \n", valorb);
	}
}
main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	printf("Digite o valor do lado horizontal: ");
	scanf("%d", &a);
	printf("Digite o valor do lado vertical: ");
	scanf("%d",&b);
	maximo(a, b);
	
	system("pause");
}
