#include <stdio.h>
#include <string.h>

int main()
{
    char napis[100];
    char napis2[100];
    printf("Podaj pierwysz wyraz: ");
    scanf("%s", napis);
    printf("Podaj drugi wyraz: ");
    scanf("%s", napis2);
    strcat(napis2, napis);

    printf("Napis: %s\n", napis2);

return 0;

}
