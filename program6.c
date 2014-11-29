#include <stdio.h>
#include <string.h>

int main()
{
    char napis[100];

    printf("Podaj ciag znakow: ");
    scanf("%s", napis);

    printf("Dlugosc %d \n", strlen(napis));

  return 0;
}
