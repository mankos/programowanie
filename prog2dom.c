#include <stdio.h>
#include <stdlib.h>

enum PORA_ROKU {WIOSNA, LATO, JESIEN, ZIMA};

int main()
{
int miesiac=0;
enum PORA_ROKU pora;
printf("Podaj miesiac: \n");
scanf("%d",&miesiac);

if (miesiac==3 || miesiac==4 ||miesiac==5){
pora_roku=WIOSNA;
  }
if (miesiac==6 || miesiac==7 ||miesiac==8){
pora_roku=LATO;
  }
if (miesiac==9 || miesiac==10 ||miesiac==11){
pora_roku=JESIEN;
  }
if (miesiac==12 || miesiac==1 ||miesiac==2){
pora_roku=ZIMA;
  }

if(pora_roku==ZIMA)
{
  printf("Zima zima zima");
}
return 0;
}
