/*14. Solicitar dez números ao usuário, verificar e exibir o de maior valor.
Entrada: 32 -5 9 4 -9 5 10 43 21 26 Saída: 43*/
#include<stdio.h>
int main()
{
	float n,i=0,maior;
	printf("Digite o numero 1: ");
	scanf("%f", &n);
	while(i<9)
	{
		printf("Digite o numero %.f: ", i + 2);
		scanf("%f", &n);
		if(n>maior)
		{
			maior=n;//atualizar o maior
		}
		i++;
	}
	printf("o maior numero e %.f", maior);
}
