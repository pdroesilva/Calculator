#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int xoperacao;
void limparTela() {
	system("cls");
}
float somar(){
		float xsoma1, xsoma2, xresult;
		printf("Opera��o n�mero %d escolhida! \n",xoperacao);
		printf("Digite o primeiro valor: ");
		scanf("%f",&xsoma1);
		printf("Digite o segundo valor: ");
		scanf("%f",&xsoma2);
		xresult = xsoma1 + xsoma2;
		printf("A soma entre %.2f e %.2f � igual �: %.2f. \n",xsoma1, xsoma2, xresult);
		system("PAUSE");
		limparTela();
		return main();
}

float subtrair(){
		float xsub1, xsub2, xresult;
		printf("Opera��o n�mero %d escolhida! \n",xoperacao);
		printf("Digite o primeiro valor: ");
		scanf("%f",&xsub1);
		printf("Digite o segundo valor: ");
		scanf("%f",&xsub2);
		xresult = xsub1 - xsub2;
		printf("A subtra��o entre %.2f e %.2f � igual �: %.2f. \n",xsub1, xsub2, xresult);
		system("PAUSE");
		limparTela();
		return main();
}

float dividir(){
		float xdiv1, xdiv2, xresult;
		printf("Opera��o n�mero %d escolhida! \n",xoperacao);
		printf("Digite o primeiro valor: ");
		scanf("%f",&xdiv1);
		printf("Digite o segundo valor: ");
		scanf("%f",&xdiv2);
		if(xdiv2 == 0){
			printf("Erro: Impossivel dividir por 0! digite outro valor: \n");
			scanf("%f",&xdiv2);
		}
		xresult = xdiv1 / xdiv2;
		printf("A divis�o entre %.2f e %.2f � igual �: %.2f. \n",xdiv1, xdiv2, xresult);
		system("PAUSE");
		limparTela();
		return main();
}

float multiplicar(){
		float xmult1, xmult2, xresult;
		printf("Opera��o n�mero %d escolhida! \n",xoperacao);
		printf("Digite o primeiro valor: ");
		scanf("%f",&xmult1);
		printf("Digite o segundo valor: ");
		scanf("%f",&xmult2);
		xresult = xmult1 * xmult2;
		printf("A multiplica��o entre %.2f e %.2f � igual �: %.2f. \n",xmult1, xmult2, xresult);
		system("PAUSE");
		limparTela();
		return main();
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Calculadora de opera��es basicas (Soma, Subtra��o, Divis�o e multiplica��o). \n");
	printf("***************************************************************************** \n");
	printf("Tecle o n�mero correspondente a opera��o que deseja realizar: \n");
	printf("***************************************************************************** \n");
	printf("Soma: 1 \n");
	printf("Subtra��o: 2 \n");
	printf("Divis�o: 3 \n");
	printf("Multiplica��o: 4 \n");
	printf("Enccerrar o programa: 0 \n");
	printf("***************************************************************************** \n");
	scanf("%d",&xoperacao);
	
		if(xoperacao == 1){
			somar();
		} else if(xoperacao == 2){
			subtrair();
		} else if(xoperacao == 3){
			dividir();
		} else if(xoperacao == 4){
			multiplicar();
		} else if(xoperacao == 0){
			printf("Programa encerrado. \n");
			return 0;
		} else{
			printf("Erro: Valor invalido, digite um n�mero correspondente as op��es acima! \n");
			system("PAUSE");
			getchar();
			limparTela();
			return main();
			}
			return 0;
		}
