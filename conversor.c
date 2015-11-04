//programa que convierta bit, byte, kilobyte,gigabyte,terabyte en megabytes
#include<stdio.h>//libreria de E/S
float mb;
float bit;
float by;
float kb;
float gb;
float tb;
int main()
{
	bit=8388608;
	by=1048576;
	kb=1024;
	gb=0.0009765625;
	tb=0.0000009537;
	printf("Ingrese los mb:/n");
    scanf("%f",&mb);
    bit=(mb*kb*by);
    printf("en bit equivale a: %f/n",bit);
    by=(mb*kb);
    printf("en byte equivale a: %f/n",by);
    gb=(mb*gb);
    printf("en gigabytes equivale a: %f/n",gb);
    tb=(mb/gb*tb);
    printf("en terabyte equivale a: %f/n",tb);
    
}
