#include <stdio.h>
// chcemy aby funkcja jakas zwracala czesc z dzielenia a/b
// oraz reszte z dzielenia
// 1. Potrzebna struktura 
struct Liczba
{
	int czesc_calk;
	int reszta;
};

// Funkcja, ktora dzieli a przez b i zwraca struct liczba
struct Liczba DzielenieZReszta(int a, int b)
{
	struct Liczba licz;
	
	licz.czesc_calk = a / b;
	licz.reszta = a % b;


	return licz;

}


int main()
{
	int x = 1231411;
	int y = 12331;
	
	struct Liczba wynik;
	wynik = DzielenieZReszta(x,y);

	printf("%d / %d = %d reszty %d\n ", x, y, wynik.czesc_calk, wynik.reszta);



return 0;
}