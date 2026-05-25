#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void){
	int *c = NULL;
	int lenght = 4;
	c = realloc(c,lenght * sizeof(int));
	c[1] = 034;
	printf("%d",c[1]);




	return 0;

}
