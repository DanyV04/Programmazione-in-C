#include <stdio.h>

int main(){

    //dichiarazione delle variabili

    int nDecimale; 
    int resto;
    int nBinario[100];  // [] --> indicano dimensione fissa dell'array (da 0 a max-1 aka 99)
    int i = 99;  //spazi dell'array effettivi
    
    scanf("%d", &nDecimale);

    //impostazione funzione if che se nDecimale == 0 produce l'uscita dal programma

    if(nDecimale==0){
    	printf("Il risultato in binario e 0");
	}
	else{ // se != 0 si entra nel ciclo di while 

        // ci dice che finchè la divisione non è intera lui continua nello svolgere il suo compito

	while (nDecimale>1) //per cicli generici (nonn si sa durata)
    {
        resto = nDecimale%2;
        nDecimale/=2;       //nDecimale= nDecimale/2;
        nBinario[i]= resto;         //[] --> indica la posizione dell'array --> colloca resto in uno spazio dell'array di spazio 0-99
        i--;        //decremento
                    //se inserisco vale su array senza int la variabile rimane fissa
        
    //quando resto = 1 esce dal ciclo (calcolo della divisione intera è 1 es. 2/2 1 == resto 0)
    }
    nBinario[i] = 1; //stampa valore 1 (conservare valore 1 in array)
    printf("Il risultato in binario e: ");
   
   for (int j = 99; i <= j; i++)   //per valori di i minori di j ()
    {
        printf("%d", nBinario[i]); //stampando i valori contenuti nell'array
    }
	}
    return 0;

}