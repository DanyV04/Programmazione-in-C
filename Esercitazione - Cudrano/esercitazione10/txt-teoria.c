/*sottoprogrammi --> sono dei piccoli algoritmi che migliorano l'ottimizzazione e correttezza del codice
  ogni funzione deve risolvere un problema, non multipli insieme  - indicativamente -

    // il compilatore legge in maniera TOP-DOWN

  PROTOTIPO
  int somma_numeri(int, int );
  int somma_numeri (int a, int b){
    int val = a + b;
    return val;
    }
  
  -- DEFINIZIONE GENERALE DI UN PROGRAMMA --
  #include
    ...
  #define 
    ...
  typedef

    -- si definiscono le funzioni che sono presenti all'interno del codice -- 
  int funz1(int, int)  non serve definire gli argomenti di int

  int main(){}
  ...
  //definizione delle funzione si mette in fondo al MAIN
  
  int funz1(int a, int b){    a,b sono argomenti della funzione --> sono i nomi che si usano per riferirsi all'interno della funzione
    return a+b;               ritorna il valore calcolato dalla funzione   --- può essere anche un'espressione, la calcola, e poi la riporta nel main 
    IMPORTANTE --> definire cosa fa la funzione al suo interno per essere completi

    int somma=funz1(n1,n2);  n1,n2  sono interi simili a quelli definiti dal prototipo di funzione  --> possono essere utilizzati anche float, char, long int e tutti i tipi
      
      SI POSSONO USARE FUNZIONI ALL'INTERNO DI FUNZIONI
      Le variabili dichiarate nelle funzioni possono essere usate solo nelle funzioni, a meno di dichiarazioni ulteriori


      if(a > b)
      return a-b;
      else
      return b-a;   se non ho un return, viene returnato un altro valore a caso nella memoria. 
                    Quando si esegue una funzione bisogna sempre arrivare ad un RETURN.                  
          return fa saltare fuori dalla funzione in qualunque posizione esso sia (e non solo nelle funzioni) KILLA IL PROGRAMMA NELLA POSIZIONE IN CUI SI TROVA
            si può togliere else dall'if mettendo un solo return, ma se esiste else necessita return

      SE NON SI HANNO DEGLI OUTPUT
        si utilizza la funzione VOID, che non vuole return (da errore il compilatore)
        
        si può SALTARE FUORI da una funzione con una return, ma in casi estremi
  }


  per usare una propria libreria --> #include "...path "
*/