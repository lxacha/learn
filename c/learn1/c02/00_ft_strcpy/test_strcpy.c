#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strncpy(char *dest,char *src,unsigned int n){

        int i = 0;

        while(i<n){
                dest[i] = src[i];
                i++;
        }

        return dest;

}

void main(){

	int i = 0;

	char *a="something";
	char b[14] = "oooooooooooooo";
	int c = 9 ;

	ft_strncpy(b,a,c);

	while(i<15){
		write(1,&b[i],1);
		i++;
	}


}
