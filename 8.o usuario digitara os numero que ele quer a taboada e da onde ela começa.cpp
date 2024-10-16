/*8. Solicitar ao usuário dois números (o da tabuada e do multiplicador)
e exibir a tabuada no formato escolar.*/
#include<stdio.h>
int main()
{
	int t,mu,multi,i=0;
	printf("Digite o numero da tabuada: ");
	scanf("%d", &t);
	printf("Digite o numero da multiplicador: ");
	scanf("%d", &mu);
	while(i <= mu)
	{
		multi=t*i;
		printf("%d x %d = %d\n", t,i,multi);
		i++;
	}
}
