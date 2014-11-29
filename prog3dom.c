#include <stdio.h>
enum Pytanie{TAK,NIE};
int main()
{
const float komputer = 2100.50;
const float samochod = 999.99;

enum Pytanie p1;

	if (komputer > samochod)
	{
		p1 = TAK;
	}
	else
	{
		p1 = NIE;
	}

	if (p1 == TAK)
	{
		printf("Twoj komputer jest drozszy niz moj samochod!");
	}

	return 0;
}
