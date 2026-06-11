#include <stdio.h>
#include <unistd.h>

void ft_print_reverse_alphabet(void){
	write(1,"zyxwvutsrqponmlkjihgfedcba",26);
	write(1,"\n",1);
}
void main(void){
	ft_print_reverse_alphabet();
}
