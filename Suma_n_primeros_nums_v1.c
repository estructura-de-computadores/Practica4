#include <stdio.h>
//Codigo con estructura if while
int main ()
{
	int Num, Total, i;

	printf ("Escribe cuantos numeros quieres sumar: ");

	scanf ("%d", &Num);

	Total = 0;

	i = 1;

	if (Num >= 1) {
		while (i <= Num){
			Total = Total + i;
			i = i + 1;
		}
		printf ("La suma es: %d \n", Total);
	}
	else {
		printf ("El numero ha de ser mayor o igual a 1\n");
	}

	return 0;
}
