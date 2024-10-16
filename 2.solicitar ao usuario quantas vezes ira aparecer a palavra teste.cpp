/*Solicitar ao usuário a quantidade de vezes que será exibida na tela a palavra “teste”*/
#include<stdio.h>
int main()
{
	int n,teste=1;
	printf("Digite a quantidade de vezes que a palavra teste ira aparece: ");
	scanf("%d", &n);
	while(teste<=n)
	{
		teste++;
		printf("Teste\n");
	
	}
	
}
