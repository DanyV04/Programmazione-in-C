// Date le seguenti dichiarazioni di variabile


int *pPtr = NULL; 
int *qPtr = NULL; 
int *rPtr = NULL;

int x = 1, y = 5;
// descrivere cosa comporta nella memoria del calcolatore l’esecuzione delle istruzioni riportate di seguito

pPtr = &x; qPtr = &x; rPtr = &y;
*pPtr = *pPtr * 3 + 1;
qPtr = rPtr;
printf(" %d, %d, %d ", *pPtr, *qPtr, *rPtr);

*rPtr = *qPtr;
rPtr = pPtr;
pPtr = qPtr;
printf(" %d, %d, %d ", *pPtr, *qPtr, *rPtr);


// DESCRIZIONE
/*
 // primo blocco indica l'inizializzazione dei puntatori al compilatore
 
 /* secondo passaggio : 
  
  1) pPtr = 1; qPtr = 1; rPtr = 5;
  
  2) *pPtr = 4  indirizzo a cui punta P --> che  è X = 1 --> 1*3 +1 = 4
     qPtr = rPtr --> cambio di variabile da x a y per qPtr che diventa uguale a 5 

      VALORI AL SECONDO PASSAGGIO 

        pPtr = 4, qPtr = 5 , rPtr = 5
        
      

  3) *rPtr = *qPtr il valore a cui punta r è il valore a cui punta q --> entrambi punteranno a &x -- con un valore uguale a 5
     rPtr = pPtr stiamo dicendo che rPtr passa da un valore 5 a un valore 4 -- contenuto in pPtr
     pPtr = qPtr e che pPtr passa ad un valore 5 da un valore 4

     STAMPA FINALE DEI VALORI
     
     pPtr= 4 , qPtr = 4 , rPtr = 5


*/