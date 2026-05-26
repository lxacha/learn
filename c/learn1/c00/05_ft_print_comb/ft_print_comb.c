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
				 }

	int ab[999][3]= {0};		/*liste de 999 listes de 3 int */
	int abplus[999]={0};		/*list de 999 int (ref prime addition)*/
	for (int i=0; i < max; i++ ){ 	/* pour tant que il n'y a pas eu plus 999 repetition*/	

		int backa = a[i];	/* backup de la valeur de i dans la liste a*/
		int  primesin[3] = {0}; /*liste de 3 int*/

		a[i] = a[i] % 10;	/*combien de fois y a t'il 10 dans i de a (25 = 2, 300 = 30)*/
			
		primesin[2] = prime[a[i]];
		a[i] = backa;   
		a[i] = a[i]/10;
		a[i] = a[i] % 10;

		primesin[1] = prime[a[i]];
		a[i] = backa;
		a[i] = a[i]/100;
		a[i] = a[i] % 10;
	
		primesin[0] = prime[a[i]];
		a[i] = backa;
		
		ab[i][0] = primesin[0];
		ab[i][1] = primesin[1];
		ab[i][2] = primesin[2];


	abplus[i] = ab[i][0]+ab[i][1]+ab[i][2];
				}


	int *cloneabplus= NULL; 
	int sca  = 1;
	int *finalprimes= NULL;
	int sfp = 1;
	
	for (int i= 0;i<max;i++){
		cloneabplus = realloc(cloneabplus,sca * sizeof(int));
		cloneabplus[i] = abplus[i];
		sca++;
				}
				
	for (int i= 0;i< max;i++){                         /*loop that goes through every nb*/
                if (cloneabplus[i] == -1){                      /*si nb in cloneabp = -1 brise la loop*/
                continue;

                }
		
		for (int x = i + 1;x<max;x++){			/*loop that permits to compare every nb to every nb*/
		if (abplus[i] == cloneabplus[x]){		/*si abp i et cloneabplus eg marque cloneabplus=-1 */
		 cloneabplus[x] = -1;				/**/
		}		
	
	

					}		
				}

	for (int i= 0;i<max;i++){
		
		if (cloneabplus[i] != -1){
		finalprimes = realloc(finalprimes,sfp *sizeof(int));
		finalprimes[sfp - 1] = a[i];
		sfp++;
					}
		
	}


for (int j = 0; j < sfp - 1; j++){
    printf("%d\n", finalprimes[j]);
}
}
int main(void)
{
	ft_print_comb();
	return 0;

}
