// Si inizializzi un array di N interi con valori ordinati crescenti.
// Leggere quindi da tastiera un nuovo intero e inserirlo in modo da
// mantenere l’array ordinato (inserimento ordinato).

#include <stdio.h>
#include <time.h>
#define MAX 20
int main()
{
  int a[MAX];   // il nostro array -- inizializzato a 0
  int n1;       // valore a scelta da inserire
  int hold;     // variabile che salva il carattere
  int cap = 15; // limite di numeri già pre-inseriti nell'array
  srand(time(0));

  for (int i = 0; i < MAX; i++) // randomizzano i numeri
  {
    a[i] = 1 + rand() % 100;
  }
  for (int j = 1; j < cap; j++) // riordinata la sequenza generata dal randomizzatore
  {
    for (int k = 0; k < cap - 1; k++) 
    {
      if (a[k] > a[k + 1]) // algoritmo di riordinamento
      {
        hold = a[k];
        a[k] = a[k + 1];
        a[k + 1] = hold;
      }
    }
  }
  

  for (int i = 0; i < MAX - cap; i++) // inserimento di numeri a scelta all'interno dell'array -- 30 numeri definiti dalla condizione d MAX - CAP
  {
    printf("\nInserisci un valore causale positivo: ");
    scanf("%d", &n1);

    for (int k = 0; k < MAX; k++)
    {
      if (a[k] > a[k + 1])
      {
        hold = a[k];
        a[k] = a[k + 1];
        a[k + 1] = hold;
      }
    }
  }
  for (int i = 0; i < MAX; i++) // stampa i valori dell'array
  {
    printf("%4d", a[i]);
  }

  return 0;
}