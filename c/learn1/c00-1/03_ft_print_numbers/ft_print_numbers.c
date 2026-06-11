#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void){
	write(1,"0123456789",10);
	write(1,"\n",1);
}

void main(void){
	ft_print_numbers();
}
