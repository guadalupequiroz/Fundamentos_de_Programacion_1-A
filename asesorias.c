#include<stdio.h>//libreria de E/S
int N1;
int N2;
int resultado;
float division;
int main()

{
	printf("programa que suma dos numeros\n");
	printf("dame el primer numero");
	scanf("%d",&N1);
	printf("dame el segundo numero");
	scanf("%d",&N2);
	resultado=N1+N2;
	printf("el resultado de la suma es\n");
	printf("%d\n",resultado);
	division=(float)N1/N2;
	printf("el resultado de la division es:%f",division);
	
}

