#include <stdio.h>
#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
	write(1,"zyxwvytsrqponmlkjihgfedcba",26);

}

int main()
{
	ft_print_reverse_alphabet();
	return 0;

}
