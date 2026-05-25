#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void ft_print_comb(void)
{
        int *a = NULL;
        int taille = 1;
        int max = 1000;

	int prime[] = {2,3,5,7,11,13,17,19,23,29}; 

        for (int i=0; i < max; i++){
		a = realloc(a,taille * sizeof(int));
        	a[i] = i;
		taille++;
        	printf("%d\n",a[i]);
        }

	int * ab= NULL;
	int tailleab = 1;

	for (int i=0; i < max; i++ ){
		ab = realloc(ab,taille * sizeof(int));
		int backa = a[i];
		int  primesin[3] = {0,0,0};
			while (a[i] > 9){
				a[i] = a[i]/10;		
		}
		primesin[0] = prime[a[i]];
		a[i] = backa;   
			while (a[i] > 9){
				a[i] = a[i]/100;
		}
		primesin[1] = prime[a[i]];
		a[i] = backa;
			while (a[i] > 9){
				a[i] = a[i]/1000;
		}
		primesin[2] = prime[a[i]];
		a[i] = backa;
		
		tailleab++;
	printf("%d",ab[1]);
	}


/*	for (int x=0;x < 3; x++){
	
	}
*/
}
int main(void)
{
	ft_print_comb();
	return 0;

}
