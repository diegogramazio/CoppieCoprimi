#include <stdio.h>

/* Programma che stampa tutte le coppie (i,j) di numeri
 * coprimi tali che 1<=i<=j<=10 */
int main() {
	    int i, j;                                // due variabili contatori
		int mcd;                               // massimo comun divisore
		
		/* fai variare la variabile i fra 1 e 10 */
		for(i=1;i<=10;i++) {
		/* visto che i<=j, si puo' inizializzare il secondo contatore ad i */
		         for(j=i;j<=10;j++) {
					     /* calcola il MCD di i e j */
						 mcd = i;
						 while(i%mcd!=0 || j%mcd!=0)
							     mcd--;
						if(mcd==1)
							     printf("(%d,%d)\n", i, j);
				 }
		}
}
