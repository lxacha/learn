#include <stdio.h>
#include <unistd.h>

void ft_ultimate_ft(int *******nbr){    
	printf("%d\n",*******nbr);
}

void main(){
	int a = 42;
	int *b = &a;
	int **bb = &b;
	int ***bbb = &bb;
	int ****bbbb = &bbb;
	int *****bbbbb = &bbbb;
	int ******bbbbbb = &bbbbb;

	ft_ultimate_ft(&bbbbbb);
}
