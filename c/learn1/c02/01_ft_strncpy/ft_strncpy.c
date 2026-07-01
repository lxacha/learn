#include <stdio.h>
#include <string.h>
#include <unistd.h>
int slen(char *Aa){

	char *p = Aa;
	while(*p)p++;

	int len = p - Aa;
	printf("%d\n",len);

	return len;
}

char *ft_strncpy(char *dest,char *src, unsigned int n){

	int i = 0;
	int a = slen(src);
	int b = slen(dest);

	while(i<a){

	dest[i] = src[i];
	write(1,&dest[i],1);
	i++;
	}
	write(1,"\n",1);

}

void main(){

	char *a = "something";
	char b[14] = {};
	unsigned int clen = 9;
	ft_strncpy(b,a,9);

}
