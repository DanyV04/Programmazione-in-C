
/* immagine la possiamo vedere come una matrice di pixel  --- Grayscale nero,bianco sono opposti --- RGB ,red, green, blue
 RICHIESTA --> convertire da matrice rgb a matrice di grigi 
     --> ogni elemento della matrice e' rappresentata da una struttura che indica r, g, b
*/
#include <stdio.h>
#define R 32
#define C 24

// definizione di una struct per tutto il main --- _t --> convenzione che si associa variabile - tipo
typedef struct{
 int i;
}grayscale_t; // nome della struct
typedef struct{
    int r;
    int g;
    int b;
}rgb_t;

int main(){
    // definizione di matrici
    rgb_t input[R][C];
    grayscale_t output[R][C];
     // inizializzazione input[0][0].r = 0 --- input[][].g = 0 ---- input[][].b = 0

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; i++)
        {
            output[i][j].i = 0.2898 * input[i][j].r +
                             0.5870 * input[i][j].g +
                             0.1140 * input[i][j].b;
        }
        // .i indica l'inserimento del calcolo nel CAMPO .i --> modalità di accesso alla cella
    }
    
}
  /* OSSERVAZIONE
     int v[N];
     int f; 
     int n; 
     scanf("%d", &n);
     for(i=0, f = 1; i < n; n--, i++){  
        f *= n;
        v[i] = f;
    }


    TRACE TABLE

    f | n | i | v
--------------------
    1 | 5 | 0 |   ------------------
      |   |   |   5 | | | | | | | |
    5 | 4 | 1 |   -----------------
      |   |   |
    1 | 1 | 0 |
  */