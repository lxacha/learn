#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a,int *b){
	int Aa = *a;
	int Bb = *b;
	
	*a = Bb;
	*b = Aa;
	
	printf("%d\n%d\n",*a,*b);
}

void main(){
	int Aa = 11;
	int Bb = 22;

	ft_swap(&Aa,&Bb);


}
