/* 
Il Dottor Emmett Brown di "Ritorno al Futuro" ha bisogno del vostro aiuto per sviluppare il software del 
“contachilometri temporale” per la sua DeLorean.  
Il programma riceve in input la data di partenza e la data di destinazione. Successivamente calcola e 
stampa a video la distanza tra le due date in anni, mesi, giorni, ore e minuti.  

INSERIMENTO INFORMAZIONI:
Inserisci data e ora di partenza della DeLorean (DD-MM-YYYY hh:mm): 12-09-1988 23:45 
Inserisci data e ora di destinazione della DeLorean (DD-MM-YYYY hh:mm): 23-01-2022 
23:58 Grande Giove! Hai viaggiato nel tempo per 33 anni 4 mesi 11 giorni 0 ore e 13 
minuti!  

REQUISITI:  

•Le date vanno acquisite direttamente in formato DD-MM-YYYY hh:mm 
•Va verificata la validità delle date inserite: se almeno una delle date non è valida, allora il programma stampa a video un messaggio di errore 
    e termina l’esecuzione 	
•Ipotizziamo che la DeLorean possa viaggiare dal 1 gennaio 1888 al 31 dicembre 2100 
•Le date non devono essere necessariamente inserite in ordine cronologico, in quanto la DeLorean può viaggiare avanti e indietro nel tempo 	
•Il programma deve tenere conto degli anni bisestili e del numero differente di giorni presenti in ciascun mese dell'anno 	
• per verificare la correttezza del risultato è possibile utilizzare questo calcolatore on-line 
*/


 // OBIETTIVO --> creare delle funzioni che ci permettano di snellire il calcolo all'interno del main
        // avremo una funzione di conversione verso i minuti, una sottrazzione rispetto alle date inserite e infine tutta la riconversione in formato corretto


#include <stdio.h>
#include <stringh.h>

int conversioneminuti(int ore, int minuti, int giorni);
int conversioneinversa(int risultato);
int conversioneminuti(int ore, int minuti, int giorni){
    int risultato in minuti;

    //operazioni di trasformarzione da anni,mesi,giorni in minuti 

    return risultato;
}
int conversione inversa(int risultato){

    //riconversione in minuti in modo corretto tenendo conto delle condizioni degli anni bisestili e mesi particolari
}

int main(){
               
return 0;
}