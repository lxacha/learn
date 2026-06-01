#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void ft_print_comb(){
	int i;
	int y;

	for(i=0;i<100;i++){
	        int *liste = NULL;
		for(y=0;y<100;y++){
			if(i<=y){
			printf("%02d %02d\n",i,y);
			}
			else{
				continue;	
			}	
		}
	}
}


int main(){
	ft_print_comb();
	return 0;

}

