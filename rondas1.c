#include<stdio.h>//libreria de E/S
int N1;
int resultado;
int main()
{
	printf("programa que me de el numero de equipos\n");
	printf("dame el numero de equipos");
	scanf("%d",&N1);
	printf("el resultado de la primera ronda es");
	resultado=N1/2;
	printf("%d\n",resultado);
	printf("el resultado de la segunda ronda es");
	resultado=N1/4;
	printf("%d\n",resultado);
	printf("el resultado de la tercer ronda es");
	resultado=N1/6;
	printf("%d\n",resultado);
}
