#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb){
	char nbc = nb + '0';
	write(1,&nbc,1);
}

void help_transl(char *s){
	static int i= 0;
	int a = s[0] - '0';
	if(i<10){
		i++;
		if(s[0] == '\0'){
			return;
		}
		ft_putnbr(a);
		help_transl(s + 1);
	}
	
}

void main(int argc,char *argv[]){
	help_transl(argv[1]);


}
