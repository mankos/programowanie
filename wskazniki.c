#include <stdio.h

// &zmienna - zwraca adres komorki pod ktora znajduke sie zmienna
// *WSK zwraca nam zawartosc komorki na ktora wskazje WSK

void DodajJeden(int n)
{
	n = n + 1;
}
void DodajJedenWsk(int *wsk_na_liczbe)
{
	// przypisujemy do liczby zawartosc komorki pod adresem
	// wsk_na_liczbe
	int liczba = *wsk_na_liczbe ;
	liczba++;

	// umieszczamy zmodyfikowana liczbe pod adres
	*wsk_na_liczbe = liczba;
}

int main()
{
	int f = 8, d = 5;
	float liczba =5.0;

	// deklaracja zmiennej ktora wskazuje na adres pamieci pod ktorym jest TYP int
	int *c;
	float *wsk_d = &liczba;

	//zmienna przechowuje adres komorki a
	c= &f;

	printf("Pod adresem %p mamy liczbe %d \n" , c, *c);
	printf("Pod adresem %p mamy liczbe %f \n" ,wsk_d, *wsk_d);
	
	int a = 5;			// deklaracja na zmienna a
	printf("a = %d\n", a);		// wyswietlamy a
	DodajJeden(&a);			// wywolujemy funkcje
	printf("a = %d\n", a);		// ktorej przekazujemy koppie
					// zmiennej a
					// wyswietlamy a
return 0;


}