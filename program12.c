#include <stdio.h>

// Program, w ktorym bedziemy potrzebowali wiele okregow
// Definicja okrag: srodek x,y oraz promien r

// Potrzebujemy 10 okregow
// Definicja struktory
struct Okrag
{
	int x;
	int y;
	float r;
	char kolor[20];
};

// Zastosowanie struktur
// Chcemy aby funkcja jakas zwracala kilka rzeczy na raz

int DzielenieZReszta(int a, int b)
{
	return a/b;
}


	struct Okrag Jednostkowy()
	przyklad.x = 0;
	przyklad.y = 0;
	przyklad.r = 1.0
	strcpy(przyklad.kolor, "Bialy");


/*void wypisz(int x, int y, float r)*/
void wypisz(struct Okrag o)
{
	/*printf("Okrag = (%d, %d, %f )\n", x, y, r);*/
	printf ("Okrag = (%d, %d, %f)\n", x.o, y.o r.o)
}

float pole (int x, int y, float r)
{
	/*return 3.14 * r * r;*/
	return 3.14 * o.r * o.r;
}

int main()
{

	/*int x[10];
	int y[10];
	float r[10];*/

	// Tablica 10 okregow
	struct Okrag Tablica[10];

	// Uzupelniamy pierwszy okrag(1,2,5,0)
	/*x[0] = 1;
	y[0] = 2;
	r[0] = 5.0;*/

	Tablica[0].x = 1;
	Tablica[0].y = 2;
	Tablica[0].r = 5.0;

	// Storzenie zmiennej typu Okrag
	struct Okrag o1;
	o1.x = 1;
	o1.y = 2;
	o1.r = 5.0;
 
	/*wypisz(x[0], y[0], r[0]);*/
	wypisz(Tablica[1]);

	/*printf("Pole okregu to %f\n", pole(x[0], y[0], r[0]));*/
	printf("pole okregu to %f, pole(Tablica[1]));

	/*Tablica[2] = {1,1,10.0, "Czarnego" };*/

	Tablica[2] = Jednostkowy(); // aby ta funkcja zwracala(O,O,1.0,"bialy"
	wypisz (Tablica[2]);





return 0; 
}
