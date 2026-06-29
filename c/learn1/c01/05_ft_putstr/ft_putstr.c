#include <unistd.h>

void ft_putstr(char *str){
	int i = 0;

	while(i != 13){
		write(1,&str[i],1);
		i++;
	}
	write(1,"\n",1);
}

void main(){

	char str1[] = "something ...";
	ft_putstr(str1);

}
