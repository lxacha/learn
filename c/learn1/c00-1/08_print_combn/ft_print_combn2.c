#include <stdio.h>
#include <unistd.h>

char printpt(int n){
	//write(1,"\n",1); // prints out the integer n
}

void check_ascend(int nba,int nbdigi2,int yp){   // yp 789 ,  nba 3, nbdigi2 1000
	static int iter = 0;			// nombre iteration
        static char *lidig[99999];		// liste de pointeur de longueur 
        int b;
	if(iter<nba){
                while(nbdigi2>yp){
                        nbdigi2 = nbdigi2 / 10;
                }
        int Aa = yp/nbdigi2;
        if(nbdigi2 != 1){
		b = yp - Aa * nbdigi2;
        }

                lidig[1][iter] = '0' + Aa;
                check_ascend(nba-1,nbdigi2,b);
		printpt(lidig[1][iter]);
		//printf("%c\n",lidig[1][iter]);
         }



}

void ft_print_combn(int n){ // n = 3
	//printf("%d",n);
	int i=0;
	int y;
	int nbdigi= 1;

	while(i<n){
	nbdigi = nbdigi *10;        // 10 , 100 , 1000 nbdigi
	i++;
	printf("%d",nbdigi);
	}

	y = 1;
	while(y<nbdigi){
	//printf("%d\n",y);
	//check_ascend(y,n,nbdigi);       // y 0, 1, 2 ... 387.. 997,998,999   , n = 3
	y++;
	}

}



void main(int argc,char *argv[]){

	int a=argv[1][0] - '0';
	printf("%d",a);
	ft_print_combn(a);
}
