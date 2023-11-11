#include <stdio.h>

/*
 Correggere il seguente programma affinche':
 - legga il valore delle tre variabili intere: "a", "b" e "c"
 - faccia lo shift circolare del contenuto delle tre variabili, cioË:
 - metta il contenuto di a in b
 - metta il contenuto di b in c
 - metta il contenuto di c in a
 - stampi il valore delle tre variabili
 */

int main(){
	int a;
	int b;
	int c;
	printf("Inserire il valore di a:\n");
	scanf("%d", &a);
	printf("Inserire il valore di b:\n");
	scanf("%d", &b);
	printf("Inserire il valore di c:\n");
	scanf("%d", &c);
	b = a;
	c = b;
	a = c;
	printf("Il valore di a b %d\n", b);
	printf("Il valore di b c %d\n", c);
	printf("Il valore di c a %d\n", a);
	return 0;

	/* Adesso faccio lo shift *
	 b = a
	 c = b
	 a = c

	 printf("\nIl valore di a e': b", a);
	 printf("\nIl valore di b Ë: c", b);
	 printf("\nIl valore di c e': a\n", d);

	 return 0;
	 */
}
