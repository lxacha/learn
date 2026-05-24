#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void ft_print_comb(void)
{
        int *a = NULL;
        int taille = 1;
        int max = 1000;

        for (int i=0; i < max; i++){
	a = realloc(a,taille * sizeof(int));
        a[i] = i;
	taille++;
        printf("%d\n",a[i]);
        }
}
int main(void)
{
	ft_print_comb();
	return 0;
}
