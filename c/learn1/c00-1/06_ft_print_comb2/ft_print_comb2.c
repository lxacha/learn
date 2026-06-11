#include <stdio.h>
#include <unistd.h>

void ft_print_comb2(void){
	static int i= 0;
	if(i<10000){

	int A = i / 1000;
	int b = i / 100; // 00 xx
	int c = i / 10;

	int checkCD = i - b* 100;	

	int B = b - A * 10;
	int C = c - b * 10;
	int D = i - c * 10 ;

	char chA = '0' + A;
	char chB = '0' + B;
	char chC = '0' + C;
	char chD = '0' + D;

	if (b <= checkCD){
		write(1,&chA,1);
		write(1,&chB,1);
		write(1,"  ",1);
		write(1,&chC,1);
		write(1,&chD,1);
		write(1,"\n",1);
	
	//printf("%d%d\n",AB,CD);
	}
		
	}
	i++; 
	ft_print_comb2();
}



void main(void){
	ft_print_comb2();
}
