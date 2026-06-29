#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){

	*div = a / b;

	*mod = a % b;

	printf("%d\n%d\n",*div,*mod);

}

void main(){

	int Aa = 8;
	int Bb = 2;
	int Ddiv = 0;
	int Mmod = 0;

	ft_div_mod(Aa,Bb,&Ddiv,&Mmod);

}
