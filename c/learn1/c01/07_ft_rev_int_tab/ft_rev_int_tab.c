#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab,int size){

	int i = size;
	int y = i -1;
	int tabd[5];

 	while(i != -1){
		tabd[i] = tab[i];
		i = i -1;
	}
	i = 0;

	while(i != size){
		tab[i] = tabd[y];

		printf("%d\n",tab[i]);
		i++;
		y = y - 1;
	}

}

void main(){

	int tabA[5] = {1,2,3,4,5};
	int sizeA = 5;
	ft_rev_int_tab(tabA,sizeA);
}
