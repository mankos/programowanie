#include <stdio.h>
#include <string.h>

int main(int liczba, char * tablica[])
{
      printf("Liczba argumentow to %d\n", liczba);
      int i;
      for (i=0; i<liczba; ++i)
          printf("Argument %d to %s\n", i, tablica[i]);


  return 0;

}
