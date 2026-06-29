#include <stdio.h>

void ft_ultimate_div_mod(int *a,int *b){

	int c = *a / *b;
	int mod = *a % *b;

	*a = c;
	*b = mod;

	printf("%d\n%d\n",*a,*b);

}

void main(){

	int Aa = 10;
	int Bb = 3;

	ft_ultimate_div_mod(&Aa,&Bb);

}
