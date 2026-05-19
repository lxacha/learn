#include <stdio.h>
#include <unistd.h>



int main(char *a){
	char b =  a[1];
	void ft_putchar(char b);
	write(1,&b,1);
	return 0;
}
