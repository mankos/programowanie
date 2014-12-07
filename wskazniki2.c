#include <stdio.h>

void zamien(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{ 
	int a = 5, b = 1;
	zamien(&a, &b);

	// wskazniki do poszczegolnych elementow tablicy
	int tablica[100];
	int i;
	for (i=0;i<100;i++) tablica[i] = 2*i;
	
	// wskaznik do typu int
	int *wsk;




	for (i=0; i<100; i++)
{

	wsk &tablica[i];
	printf("a = %d a b = %d \n", a, b);
}




	// ustawiamy wsk na pierwszy element tablicy
	wsk = &tablica[0];
	wsk = tablica;
	for (i=0; i<100; i++)

{

	printf("Element %d to %d\n", i, *wsk);
	*wsk = *wsk +1;		// zwiekszamy ity element tablicy
	wsk = wsk + 1 		// wskaznik przeskoczy na kolejny element tablicy
}


return 0;
} 