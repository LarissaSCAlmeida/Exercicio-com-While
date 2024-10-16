/*9. Solicitar ao usuário dois números, correspondentes as extremidades de um intervalo,
 e exibir na ordem (crescente ou decrescente) em que ele digitou.*/
 #include<stdio.h>
 int main()
 {
 	int n1,n2;
 	printf("Digite um numero: ");
 	scanf("%d", &n1);
 	printf("Digite o segundo numero:");
 	scanf("%d", &n2);
 	if(n1<n2)
 	{
 		while(n1<=n2)
		 {
		 	printf("%d ", n1);
			n1++;		 
		 }
	}
	else
	{
		while(n2<=n1)
		{
			printf("%d ", n1);
			n1--;
		}	
	}
	
 }
