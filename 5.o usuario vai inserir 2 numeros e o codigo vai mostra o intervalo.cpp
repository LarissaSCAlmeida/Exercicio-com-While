/*Solicitar ao usu�rio dois n�meros e exibir na tela os n�meros do intervalo, incluindo os n�meros 
digitados.*/
#include<stdio.h>
int main()
{
	float n1,n2;
	printf("Digite o primeiro numero:\n");
	scanf("%f", &n1);
	printf("Digite o segundo numero:\n");
	scanf("%f", &n2);
	if(n1<=n2)
	{
		while(n1<=n2)
		{
			printf("%.f ", n1);
			n1++;
		}
	} else if(n2<=n1)
		{
		while(n2<=n1)
		{
			printf("%.f ", n2);
			n2++;
		}
		}
}
