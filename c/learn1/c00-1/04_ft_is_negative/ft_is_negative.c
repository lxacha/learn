#include <stdio.h>
#include <unistd.h>

void ft_is_negative(int n){
	if(n<0 & n>= -2147483648){
		write(1,"N",1);
	}
	else if(n>-1){
		write(1,"P",1);
	}
}

void main(int argc,char *argv[]){
	//printf("%s\n",argv[1]);
	int a = argv[1][0] - '0';
	//printf("%d\n",a);
	ft_is_negative(a);

}
