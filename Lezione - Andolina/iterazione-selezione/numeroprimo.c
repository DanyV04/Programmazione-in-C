/* Scrivi un programma in C che chieda all'utente di inserire un intero n. 
Verificare se n è un numero primo. 
Se n è primo, stampa "n è un numero primo." Altrimenti, stampa "n non è un numero primo." */

#include <stdio.h>
#include <math.h> // si possono utilizzare le funzioni ceil e floor per le parti intere delle funzioni
int main(void)
{
 	int n1;
	int resto;
	int count = 0;
	printf("inserisci il numero: ");
        scanf("%d", &n1);
	for (int i = 2; i <= n1; i++)	//si può dividere anche fino alla metà del numero inserito -- momento migliore per fare calcolo è con la radice del numero
	{
		if (n1 % i == 0)
		{
			count++;
		}	
	}
	if (count == 1)
			{
				printf("Il numero %d e' primo", n1);
			}else
			{
				printf("Il numero %d NON e' primo", n1);
			}
	return 0;
}
	
/*
un numero è primo se è divisibile per se stesso o per 1
    se un numero è pari non è sicuramente primo
    se un è divisibile per 1 e se stesso è PRIMO    

	BISOGNA prendere tutte le divisoni e verificare se danno come risultato 1, se ne esistono esattamente due il numero è primo, altrimenti NO.


*/
/*
#include <stdio.h>
#include <math.h>

int main(){
	int k,m, primo;
	for (m = 2; m <= (sqrt(k)) && (primo != 0); m++)
	{
		if (k % m == 0)
		{
			primo = 0;
		}
		if (primo)
		{
			printf("K è primo");
		}else{
			printf("K non è primo");
		}
		
	}
return 0;
}
*/