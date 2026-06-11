#include <stdio.h> //standard for printf
#include <unistd.h> //standard for write

void ft_print_alphabet(void){ //declare function ft_print_alphabet of type void, with no parameters.
	write(1,"abcdefghijklmnopqrstuvwxyz",26); // outputs on display 1,abcd...ect,26bytes.
	write(1,"\n",1); // outputs a return line so that it outputs on its own line.
}

int main(void){ // main function (does it have  be of type int ?? )
	ft_print_alphabet(); // calls the ft_print_alphabet function.
	return 0; //returns 0 as the function type is int
}
