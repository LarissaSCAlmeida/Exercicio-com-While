/* Solicitar ao usu�rio at� qual numero ser� exibido na tela (iniciar a partir do 1)*/
#include<stdio.h>
int main()
{
	int n,vezes=1;
	printf("Digite ate que numero deve aparecer na tela: ");
	scanf("%d", &n);
	while(vezes<=n)
	{
		printf("%d ", vezes);
		vezes++;
	}
}
