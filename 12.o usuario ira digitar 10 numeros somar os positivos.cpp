/*12. Solicitar ao usu�rio dez n�meros e somar os n�meros positivos.*/
#include<stdio.h>
int main()
{
	int n,soma=0,cont=0;
	while(cont<10)
	{
		printf("Digite o %d numero: ", cont+1);
		scanf("%d", &n);
		if(n>=0)
		{
			soma=n+soma;
		}
		cont++;
		
	}
	printf("Total=%d", soma);
}
