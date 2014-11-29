#include <stdio.h>
#include <string.h>
#include <math.h>


int Is_Palindrome ( char* Word )
{
int i, l = strlen(Word); // l - length

for( i = 0; i < ceil(l/2); i++ )
{
if( Word[i] != Word[l-i-1] ) return 0;  // Je\u017celi s\u0142owo nie jest palindromem zwró\u0107 false
}

return 1; // Je\u017celi s\u0142owo jest palindromem zwró\u0107 true

}

int main(void)
{
char *Slowo;            // Wczytaj s\u0142owo
scanf("%s", Slowo);

if( Is_Palindrome(Slowo) == 1 ) printf("%s jest palidromem.", Slowo);
else printf("%s nie jest palidromem.", Slowo);

return 0;
}
