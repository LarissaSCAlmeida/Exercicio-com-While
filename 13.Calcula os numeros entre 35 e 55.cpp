/*13. Solicitar n�meros ao usu�rio, somar os que estiverem 
entre 35 e 55. Digitar zero para finalizar a edi��o dos n�meros e exibir o resultado.*/
#include<stdio.h>
int main()
{
	float n,soma=0;
	while(1)// na�o tem contador o 0 faz parar 
	{
		printf("");
		scanf("%f", &n);
		if(n==0)
		{
			break;//faz parar caso a condi��o a cima for verdadeira
		}
		if(n>=35 && n<=55)
		{
			soma+=n;
		}
		
	}
	printf("Resultado da soma=%.1f", soma);
}
