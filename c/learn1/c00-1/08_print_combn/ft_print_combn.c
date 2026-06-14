#include <stdio.h>
#include <unistd.h>

void ft_print_combn(int n){ // n = 3
	//printf("%d",n);
	int i=0;
	int y;
	int nbdigi= 1;	
	
	
	while(i<n){
	nbdigi = nbdigi *10;        // 10 , 100 , 1000 nbdigi
	i++;
	//printf("%d",nbdigi);
	}
	
	y = 1;
	while(y<nbdigi){
	printf("%d\n",y);
	check_ascend(y,n,nbdigi);       // y 0, 1, 2 ... 387.. 997,998,999   , n = 3
	y++;
	}
	
}  

int check_ascend(int yp,int nba,int nbdigi2){   // yp 789 ,  nba 3, nbdigi2 1000
	static int d= nbas;         // nbas 3
	int iter = 0;
	char *ldig[];
	
	if(nbas != 0){
	while(iter < nbas){      // 1 ..  2  .. 3
		nbdigi2 = nbdigi2/ 10;
		int appt =
		iter++;
		ldig[1][iter] = ;
	}
	}

}


void main(int argc,char *argv[]){

	int a= argv[1][0] - '0';
	ft_print_combn(a);

}
