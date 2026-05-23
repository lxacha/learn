#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_is_negative(int n)
{
	if (n == 0){
		write(1,"null",4);
	}
	else if(n < 0){
		write(1,"neg",3);
	}
	else{
		write(1,"pos",3); 
	}
}






int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);

	ft_is_negative(a);
	return 0;
}
