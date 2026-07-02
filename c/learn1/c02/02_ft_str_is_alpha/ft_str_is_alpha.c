#include <stdio.h>
#include <unistd.h>
#include <string.h>

int slen(char *str1){
	char *p = str1;
	while(*p) p++;

	int slen = p - str1;

	printf("%d\n",slen);
	return slen;
}

int ft_str_is_alpha(char *str){

	int i = 0;
	int y = 0;
	int fin = 2;

	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int lenAlpha = slen(alpha);
	int a = slen(str);

	//printf("%d\n",a);

	while(i<a){
		while(y < lenAlpha){
			printf(" %c %d _ %c \n",str[i],i,alpha[y]);

			if(i == a){
				break;
			}

			if(str[i] == alpha[y]){
				i++;
				y = 0;
				fin = 1;

				if(i == a){
					break;
                        	}
				continue;
			}

			else{
				fin = 0;
				y++;

				if(i == a){
                                        break;
                                }
				continue;
			}
		} //printf("%d\n",fin);
		i++;
		if(i == a){
			break;
		}
	}
	printf("%d\n",fin);
}

void main(){
	char *a = "something";
	char *b = "some98ing";

	ft_str_is_alpha(b);
}
