
// Dato un insieme di punti nel piano cartesiano, calcola il perimetro del poligono formato da questi punti. Trova un modello appropriato che ti aiuti a risolvere il problema e, utilizzando questo modello, scrivi un programma che calcoli il perimetro del poligono dato un insieme di vertici.

#include <stdio.h>
#include <math.h>

int main(){
    struct perimetro
    {
        float x, y;
    };

for (int i = 0; i < DIM; i++)
{
    perimetro += sqrt(pow(punti[i].x - punti[i+1].x, 2)
                    + (pow(punti[i].y - punti[i+1].y, 2)))

// .x e .y indicano il corrispettivo rispetto alla coordinata da calcolare

}

    
}
int main(){
    int P[4];
    // i == 0 d(P[i+1], P[i])
    // i == 1 d(P[i+1], P[i])
    // i == 2 d(P[i+1], P[i])
    // i == 3 d(P[i+1], P[i])
    
} 

/* Codice di Gilles

#include <stdio.h>
#include <math.h>

typedef struct {
	float x;
	float y;
} Punto;

int main () {
	int size;
	printf("Inserire numero di punti: ");
	scanf("%d", &size);
	Punto punti[size];

	for (int i = 0; i < size; i++) {
        printf("Inserire punto %d (x, y): ", i);
        scanf("%f, %f", &punti[i].x, &punti[i].y);
    }


	float perimetro = 0;
	for (int i = 0; i < size; i++) {
		perimetro += sqrt(pow(punti[i].x - punti[(i+1) % size].x, 2) 
										+ pow(punti[i].y - punti[(i+1) % size].y, 2));
	}
	printf("Il perimetro del poligono è %f", perimetro);
}


*/