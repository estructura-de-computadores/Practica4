#include <stdio.h>
//Codigo usando estructura for
int main ()
{
	int Num, Total, i;

	printf ("Escribe cuantos numeros quieres sumar: ");

	scanf ("%d", &Num);

	Total = 0;

	i = 1;
	if (Num >= 1){
		for (i=1; i<=Num; i++)
		{
			Total = Total + i;
		}
		printf ("La suma es: %d\n", Total);
	}
	else{
		printf ("El numero ha de ser mayor o igual que 1\n");
	}
	return 0;
}
