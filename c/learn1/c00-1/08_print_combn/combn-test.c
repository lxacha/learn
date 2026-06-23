#include <stdio.h>
#include <unistd.h>
/*
void ft_print_combn(int n){

}
*/

void main(int argc,char *argv[]){
	//printf("%s\n",argv[1][0]);
	int i = 0;

	while(i<10){
		//write(1,&argv[1][i],1);
		i++;
		
		if(argv[1][i]== 'S'){
			write(1,&argv[1][i],1);
		}
	}

}
