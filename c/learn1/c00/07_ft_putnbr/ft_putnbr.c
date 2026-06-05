#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void ft_putnbr(int nb){
	if(nb <= 2147283647){
		printf("%d\n",nb);
	        //write(1,&nb,sizeof(int));
	}
}




int main(int a){
	//int x = a[0];
	//printf("%d",x);
	ft_putnbr(a);
	return 0;

}
