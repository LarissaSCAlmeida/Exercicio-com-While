/*15. Elei��o:
Em uma cidade haver� uma elei��o. Existem 3 candidatos:
1 � Huguinho
2 � Zezinho
3 � Luizinho
Diversos eleitores votar�o; por n�o sabermos a quantidade a elei��o ser� encerrada com
a digita��o de 0(zero) no voto. Considere as seguintes rotinas neste Algoritmo:
a) Ler os votos e acumular os votos de cada candidato.
b) Caso seja digitado um voto inv�lido (diferente de 0, 1, 2 e 3) 
acumular o voto como nulo.
c) Sabendo-se o total de votos, calcular a porcentagem atingida por cada candidator.
d) Ao finalizar o algoritmo, exibir os candidatos � e as informa��es respectivas da 
apura��o*/
#include<stdio.h>
int main ()
{
	int voto,somah=0,somaz=0,somal=0,soman=0,somat=0;
	float pch=0,pcz=0,pcl=0,pcn=0;
	while(1)
	{
		printf("Digite o numero do seu candidato 1 Huguinho 2  Zezinho 3  Luizinho: ");
		scanf("%d", &voto);
		
		if(voto==0)
		{
			break;
		}
		if(voto==1)
		{
			somah++;
		}
		else if(voto==2)
		{
			somaz++;
		}
		else if (voto==3)
		{
			somal++;
		}
		else
		{
			soman++;
		}
	} 
			somat=somah+somaz+somal+soman;
			pch=((float)somah/somat)*100;
			pcz=((float)somaz/somat)*100;
			pcl=((float)somal/somat)*100;
			pcn=((float)somah/somat)*100;
			
			printf("Canditato Huguinho\nVotos=%.d\nPorcentagem de %f %\n", somah,pch);
			printf("Canditato Zezinho\nVotos=%.d\nPorcentagem de %f %\n", somaz,pcz);
			printf("Canditato Luizinho\nVotos=%.d\nPorcentagem de %f %\n", somal,pcl);
			printf("Canditato nulos\nVotos=%.d\nPorcentagem de %f %\n", soman,pcn);

}
