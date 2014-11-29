#include <stdio.h>
#include <string.h>

int main()
{
    const char napis[] = "to jest przykladowy napis";

    char napis2[]= "drugi napis";
    char napis3[100];

    // laczenie znakow
    strcat(napis2, napis);

    printf("Napis: %s\n", napis2);

    // kopiowanie
    strcopy(napis, napis);


    printf("napis %s \n", napis2);

  return 0;
}
