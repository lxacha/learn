#include <stdio.h>
#include <unistd.h>
#include <string.h>

int slen(char *str){

	int flen = 0;
	char *p = str;

	while(*p)p++;
	flen = p - str;

	return flen;
}

int checkint(char Aa){

	int y= 0;
	int fin = 1;
        char *intgrs = "1234567890";
	char b;

	int lenints = slen(intgrs);

	while(y<lenints){
		b = intgrs[y];
		printf("______les valeurs comparer sont %c recu de ft_is_num et %c \n______________  f est egal a %d\n",Aa,b,fin);

		if( Aa == b){
			fin = 1;
			break;
		}
		//printf("%c _ %c \n",Aa,b);
		if( Aa != b){
			fin = 0;
			y++;
			continue;
		}

		y++;
	}
	printf("\n\n_________________________ pour %c la valeur envoyer et %d",Aa,fin);
	return fin;

}

int ft_is_numeric(char *str){

	int i= 0;
	char a;
	int f = 1;

	int lenstr = slen(str);

	//printf("%d _ %d \n",lenstr);

	while(i<lenstr){
		if(f == 0){
			break;
		}
		a = str[i];
		printf("\n\n\n\n debut char envoyer a checkint = %c \n",a);
		f = checkint(a);
		i++;
	}

	if(lenstr == 0){
		f = 1;
	}
	printf(" f final = %d \n",f);
	return f;

}

void main(){

	char *a = "123456";
	char *b = "e3";

	ft_is_numeric(b);

}

