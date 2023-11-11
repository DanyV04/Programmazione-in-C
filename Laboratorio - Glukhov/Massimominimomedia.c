 #include <stdio.h>
// per massimo, minimo e media non serve salvare i numeri

int main(){
  int media, max, somma = 0, min, n1;
  int cont = 0; //controllo --> controllo quante volte è stata eseguita una operazione
  if(cont==0){ //dichiarazione interna (muore nella variabile)
        scanf("%d", &n1); 
        if (n1>0){ //setting di valori
            max = n1;
            min = n1;
            somma = n1;
            cont++;
        }else{
            printf("Uscita dal programma\n");
        }
    }
    while (n1 > 0) //indica numeri strmaggiori di zero  //inizia il vero ciclo
    {
        scanf("%d", &n1); 
        
        //ragionamenti su ultimo scanf presente
        
        if (n1<=0)
        {
            printf("La sequenza inserita e' nulla\n");
        }else{
        if(n1>max){  //secondo numero inserito > max --> aggiorna
            max = n1;
        }
        if(n1<min){ //secondo numero inserito < min --> aggiorna
            min = n1;
        }
        somma += n1;  // somma = somma + n1  //somma numeratore
        }
        
        
    } 
    media = somma / 2; //divisone tra 
    printf("Il massimo e': %d \nIl minimo e': %d\n La media e': %d", max, min, media);
    return 0;
  
  }