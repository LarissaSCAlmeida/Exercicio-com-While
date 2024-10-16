/*13. Solicitar números ao usuário, somar os que estiverem 
entre 35 e 55. Digitar zero para finalizar a edição dos números e exibir o resultado.*/
#include<stdio.h>
int main()
{
	float n,soma=0;
	while(1)// naão tem contador o 0 faz parar 
	{
		printf("");
		scanf("%f", &n);
		if(n==0)
		{
			break;//faz parar caso a condição a cima for verdadeira
		}
		if(n>=35 && n<=55)
		{
			soma+=n;
		}
		
	}
	printf("Resultado da soma=%.1f", soma);
}
