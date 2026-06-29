#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str){

	char *p = str;
	while(*p) p++;
	int slen = p - str;

	return slen;
}

void main(){

	char a[]= "something ...";
	ft_strlen(a);
}
