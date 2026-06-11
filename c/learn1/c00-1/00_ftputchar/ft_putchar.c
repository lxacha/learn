#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
	write(1,&c,1);
}

int main(int argc,char *argv[]){ // int argc, tient nombre arguments, argv liste de liste []
	//printf("%d\n",argc);
	//printf("%s\n",a);
	ft_putchar(argv[1][0]);
	//ft_putchar(argv[1][1]);
	//ft_putchar(argv[1][2]);
	//ft_putchar(argv[1][3]);
	//ft_putchar(argv[1][4]);
	write(1,"\n",1);
	return 0;
}
