#include <stdio.h>
//Codigo con estructura do while
int main ()
{
	int Base, Exp, Pot, i;

	printf ("Escribe un numero (base): ");

	scanf ("%d", &Base);

	printf ("Escribe un numero (exponente): ");

	scanf ("%d", &Exp);

	if ((Base >= 1) && (Exp >= 1)){
		Pot = 1;
		i = 1;
		do{
			Pot = Pot * Base;
			Exp = Exp - 1;
		}while (Exp >= 1);

		printf ("La potencia es: %d\n", Pot);
	}
	else{
		printf ("La base y el exponente han de ser mayores o iguales a 1\n");
	}
	return 0;
}
