#include<stdio.h>
#include<locale.h>

funcao(int num1, int num2, int num3){
	if ((num1 == num2) && (num2 == num3)){
		printf("Tri�ngulo equil�tero \n");
	} else {
		if ((num1 == num2) || (num1 == num3) || (num2 == num3)){
			printf("Tri�ngulo is�sceles \n");
		} else {
			printf("Tri�ngulo escaleno \n");
		}
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	printf("Digite o valor de c: ");
	scanf("%d", &c);
	funcao(a, b, c);

	system("pause");
}
