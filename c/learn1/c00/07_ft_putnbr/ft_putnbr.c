#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void ft_putnbr(int nb){
	if(nb <= 2147283647){
		printf("%d",nb);
	        write(1,&nb,sizeof(int));
	}
}




int main(int argc,char *argv[]){
	char  b = argv[1][0];
	int a = b - '0';
	//printf("%d",a);
	ft_putnbr(a);
	return 0;

}
