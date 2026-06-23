#include <stdio.h>
#include <unistd.h>

void ft_write(){

}

void ft_print_sort(int iS,int y3){	// 789, 10 000
		if(iS<10){
			//ft_write(i);
			printf("%d\n",iS);
		}
		
		int iI = iS;
		int y4 = 0;
		int aA = 0;
		int bB = 0;
		int b = 0;
		
		while(y3 > iS){
			y3 = y3/10;
		}
		if(y3 != 1){
			y4 = y3/10;	// 100
		}

		while(iI > 10){
			int aA = iI / y3;
			int b = iI - aA * y3;
			int bB = b/ y4;
			if(aA == bB){
				break;
			}
			if(aA > bB){   // aA est plus grand que  bB stop 
				break;
			}
			if(aA < bB && b > 10){ //si aA est plus petit que bB et b plus grand que  10;
				iI = b;
				if(y3 != 1){
					y3 = y3/10;
					y4 = y3/10;
				}
				continue;
			}
			else{
				printf("%d\n",iS);
				break;
			}
		}
}

void ft_print_combn(int n){ //4
	int y2 = 1;
	int i2 = 0;

	while(i2<n){  
		y2=y2*10; 
		i2++;  // 10 000
	}
	//printf("%d\n",y2);

	int i4 = 0;
	
	while(i4 < y2){
		ft_print_sort(i4,y2); // 0 , 1 ... 9 999 , y2 = 10 000
		i4++;
	}

}

void main(int argc,char *argv[]){ // works returns d if 0<d>9 	
	int  i = 1;
	int y = 1;
	int b = 0;
	int a = 0;
	int d = 0;

	while(argv[1][i] != 'S'){
 		i++;
		y = y*10;
	}

	i = 0;
	if(y != 1);
	y = y/10;

	while(argv[1][i] != 'S'){
	a = argv[1][i] - '0';
	b = a*y;
	d = d+b;
	y = y/10;
	i++;
	}

	//printf("%d\n",d);
	if(d<10 && d>0){
		ft_print_combn(d);
	}
	else{
	write(1,"big0 and small9",15);
	write(1,"\n",1);
	}
}

