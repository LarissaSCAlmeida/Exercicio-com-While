/*11. Solicitar ao usuário dez números e contar quantos deles é par.*/
#include<stdio.h>
int main()
{

	int n,contador=0,pares=0;
	
	while(contador<10)
	{
		printf("Digite o numero %d: ", contador+1);
		/*vai aparece qual o numero o usuario deve digita*/
		scanf("%d", &n);
		if(n%2==0)
		{
			pares++;
		}
		contador++;
	}
		printf("Voce digitou %d numeros pares", pares);
	
	
}
