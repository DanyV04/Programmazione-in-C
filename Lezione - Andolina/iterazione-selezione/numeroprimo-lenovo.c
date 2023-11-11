#include <stdio.h>
//inserito un numero controllare se è primo

int main()
{
	int numero, div = 1;
	int counter = 0;
	printf("inserisci il numero: ");
        scanf("%d", &numero);
    
//ho impostato conta<3 per far in modo che esca subito appena trova due divisori

	while(counter<3 && div <= numero/2)
	{
		if(numero%div==0)  //se trova divisori incrementa il contatore dei divisori
			counter+=1;	
		    div+=1;
	}
	if (counter == 1){
	   printf("il numero e' primo\n ");
    }
	else{
	   printf("il numero non e' primo\n ");
    }
}


/*
un numero è primo se è divisibile per se stesso o per 1
    se un numero è pari non è sicuramente primo
    se un è divisibile per 1 e se stesso è PRIMO    


*/