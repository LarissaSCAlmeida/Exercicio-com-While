/*7. Solicitar ao usuário um número e exibir a tabuada no formato escolar.
*/
#include<stdio.h>
int main ()
{
	int n,multi,n1=0;
	printf("Digite o numero que voce gostaria da tabuada: ");
	scanf("%d", &n);
	while (n1<=10)
	{
		multi=n*n1;
		n1++;
		printf("%d X %d = %d\n", n,n1,multi);
	
	}
}
