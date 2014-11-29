#include <stdio.h>
#include <string.h>

int main()
{
    char napis[100];
    char napis1[100];
    printf("Podaj pierwysz wyraz: ");
    scanf("%s", napis);
    printf("Podaj drugi wyraz: ");
    scanf("%s", napis1);
    if( strcmp( napis, napis1 ) == 0 )
         printf( "Badane lancuchy znakow sa rowne.\n" );
    else
         printf( "Badane lancuchy znakow nie sa rowne.\n" );

    return 0;
}
