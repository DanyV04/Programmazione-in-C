#include <stdio.h>
#include <math.h>

int square(int numero); //dichiarazione

int square (int numero){ //prototipo di una funzione per la radice -- definizione della funzione 
	int risultato;
	risultato = pow(numero, 1/2);
	return risultato; 		// deve essere sempre presente per il funzionamento
}

int main(){
	int numero;
	int radice = square(numero);
	printf("Inserisci un valore:");
	scanf("%d", &numero);
	
	printf("Il risultato e': ", radice);
}

// delle funzioni che non danno un ritorno sono definite come PROCEDURE 