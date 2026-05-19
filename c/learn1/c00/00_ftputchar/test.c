# include <stdio.h>
# include <unistd.h>

int main(int argc, char **argv){
	(void)argc;
	write(1, argv[1],1);
	return 0;
}
