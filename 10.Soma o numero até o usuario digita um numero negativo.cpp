/*10. Solicitar ao usuário números, soma-los até que seja digitado um numero negativo. 
O numero negativo não fará parte da conta.*/
#include<stdio.h>
int main()
{
	float n = 0, soma = 0;
  printf("");
  scanf("%f", &n); /*colocar o scanf dentro e fora do while para que ele não pare*/
	
	while (n >= 0) 
	{
    soma += n;

    printf("");
    scanf("%f", &n); /*colocar o scanf dentro e fora do while para que ele não pare*/
    }

printf("Soma= %.f\n", soma);

}
	
/*float n=0,soma=0;
	while(1)
	{
		printf("", &n);
		scanf("%f",& n);
		if(n<0)
		{
			break;
		}
		soma=soma+n;//soma+=n;
	} 
	printf("soma=%.f", soma);*/
