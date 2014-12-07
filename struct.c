#include <stdio.h>

struct Kolo
{
	int x, y;
	float r;
};
// Przekazywanie calej struktury (tworzenie kopii lokalnej)
// metoda przekazywania argumentu przez wartosc
void wypisz(struct Kolo kolo)
{
	// if (kolo.x == 0) return;
	printf("Kolo = %d, %d, %f \n", kolo.x, kolo.y, kolo.r);

}
// przekazywanie samego adresu pamieci, gdzie sie znajduje struktura
// metoda przekazywania argumentu przez wskaznik
void wypisz_wsk(struct Kolo * kolo)
{
	if (kolo == NULL) { printf("Bledny adres!\n"); return; }
	printf("Kolo = %d, %d, %f \n", kolo->x, kolo->y, kolo->r);

}

struct Kolo Zeruj(struct Kolo jakieskolo)
{
	jakieskolo.x = jakieskolo.y = jakieskolo.r = 0;
	return jakieskolo;


}

void Zeruj_wsk(struct Kolo * wskKolo)
{
	wskKolo-> x= 0;
	wskKolo-> y= 0;
	wskKolo-> r= 0.0;
}


int main()
{
	// Tworzenie nowego obiektu typu strukturalnego
	struct Kolo kolo1 = { 1, 5, 6.0 };

	wypisz(kolo1);

	// Wskaznik do podstawowego typu danych
	float f = 10.0f;
	float *wsk = &f;

	printf("Liczba %f \n", *wsk);
	
	// Wskazniki do struktur
	struct Kolo * wsk_do_kola;
	wsk_do_kola = &kolo1;	// przypisujemy do wskaznika adres pod ktorym znajduje sie struktura Kolo

	wypisz(*wsk_do_kola);
	wypisz_wsk(wsk_do_kola);

	// zmiana skladowych
	kolo1.r = 7.0;	// przez obiekt
	(*wsk_do_kola).r = 7.0	// przez obiekt na ktory wskazuje wskaznik
	wsk_do_kola->r = 7.0	// przez wskaznik

	// odwolanie sie do skladowych struktury przez wskaznik
	printf("Promien %f \n", kolo1.r); // odwolanie przez obiekt
	printf("Promien %f \n", (*wsk_do_kola).r); // przez obiekt na ktory wskazuje wskaznik
	printf("Promien %f \n", wsk_do_kola->r); // przez wskaznik

	// Funkcja, ktora zmienia skladowe struktury, ktora przekazemy przez wskaznik
	// kolo1 = Zeruj(kolo1);
		
	Zeruj_wsk(wsk_do_kola);	// Zeruj_wsk(&kolo1);
	
	wypisz (kolo1);

	return 0;
}