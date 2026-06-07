#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void ft_putnbr(int nb){
	nb=4;
	if(nb <= 2147283647){
		//printf("%d\n",nb);
	        //write(1,&nb,sizeof(int));
	}
}




int main(int argc,char *argv[]){
	char xx = *argv[1];
	printf("%d\n",xx);
	

	//int x = a[0];
        //printf("%d",x);
	//ft_putnbr("%s\n",argv[1]);




	return 0;

}
