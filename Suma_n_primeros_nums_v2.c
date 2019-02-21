#include <stdio.h>
//Codigo usando estructura do while
int main ()
{
	int Num, Total, i;

	printf ("Escribe cuantos numeros quieres sumar: ");

	scanf ("%d", &Num);

	Total = 0;

	i = 1;
	if (Num >= 1){
		do{
			Total = Total + i;
			i = i + 1;

		}while (i <= Num );

	printf ("La suma es: %d\n", Total);
	}
	else{
		printf ("El numero ha de ser mayor o igual a 1\n");
	}
	return 0;
}
