#include <stdio.h>

void ft_sort_int_tab(int *tab,int size){

	int i = 0;
	int y = 1;
	int x = 0;

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int Dd = 0;
	int Cc = 0;

	int tabcop[size];

 	while(i<size){
		tabcop[i] = tab[i];
		//printf("%d\n",tabcop[i]);
		i++;
	}

	i = 0;

	while(i < size){
		a = tabcop[i];
		while(y<size){
			b = tabcop[y];
			if(a < b){
				tabcop[i] = b;
				tabcop[y] = a;
				a = tabcop[i];
				y++;
				continue;
			}
			if(a == b){
				y++;
				continue;
			}
			if(a>b){
				y++;
				continue;
			}
		}
		i++;
		y = 0;
		//printf("%d\n",a);
	}
	i = 0;

	while(i<size){
		printf("%d\n",tabcop[i]);
		i++;
        }
}

void main(){

	int Aa[10] = {6,9,10432,4,4,2,3,4,2,1};
	int sizeA = 10;

	ft_sort_int_tab(Aa,sizeA);

}
