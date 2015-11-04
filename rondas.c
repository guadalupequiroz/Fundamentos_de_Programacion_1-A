#include<stdio.h>//libreria de E/S
int N1;
int N2;
int resultado;
int main()
{
	printf("programa que me de el numero de equipos\n");
	printf("dame el numero de equipos");
	scanf("%d",&N1);
	scanf("%d",&N2);
	resultado=N1/N2;
	printf("%d\n",resultado);
	printf("el resultado de la primera ronda es");
	scanf("%d",&resultado);
	scanf("%d",&N2);
	resultado=resultado/N2;
	printf("%d\n",resultado);
	printf("el resultado de la segunda ronda es");
	scanf("%d",&resultado);
	scanf("%d",&N2);
	resultado=resultado/N2;
	printf("%d\n",resultado);
	printf("el resultado de la tercer ronda es");
}
