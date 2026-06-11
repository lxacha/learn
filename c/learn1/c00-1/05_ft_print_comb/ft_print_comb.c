#include <stdio.h>
#include <unistd.h>

void ft_print_comb(void){
	static int i= 0;
	if (i<791){
	int A = i/100;
	int bc = i - A*100;
	int B = bc/10;
	int ab = A*100 + B*10;
	int C = i - ab;
	i = i+1;
		if(A<B & B<C){
			char A1 = '0' + A; 
			char B1 = '0' + B;
			char C1 = '0' + C;
			write(1,&A1,1);
			write(1,&B1,1);
			write(1,&C1,1);
			write(1,"\n",1);
			i = i+1;
			ft_print_comb();
		}
	ft_print_comb();
	}
}

void main(void){
	ft_print_comb();
}
