#include<stdio.h>//libreria de E/S
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
int i;
int j;
int max;
int min;
int main()
{
	printf("programa que recibe 10 num y determina si es mayor o menor\n");
    scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    max=a;
    if(b>max)
    max=b;
    if(c>max)
    max=c;
    if(d>max)
    max=d;
    if(e>max)
    max=e;
    if(f>max)
    max=f;
    if(g>max)
    max=g;
    if(h>max)
    max=h;
    if(i>max)
    max=i;
    if(j>max)
    max=j;
    printf("el numero mayor es %d\n",max);
    
    min=a;
    if(b<min)
    min=b;
    if(c<min)
    min=c;
    if(d<min)
    min=d;
    if(e<min)
    min=e;
    if(f<min)
    min=f;
    if(g<min)
    min=g;
    if(h<min)
    min=h;
    if(i<min)
    min=i;
    if(j<min)
    min=j;
    printf("el numero es menor es %\n",min);
    

	
}
