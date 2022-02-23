// Program treba generirat random polje i ispisat koliko ima parnih i neparnih brojeva.

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int velicina,parni=0,neparni=0;
   printf("Unesi velicinu polja:");
   scanf("%d",&velicina);
   int polje[velicina],i;
   for(i=0;i<velicina;i++)
     polje[i]=rand()%100;   //Generira random broj od 0 do 99
   printf("\nElementi polja su:");
   for(i=0;i<velicina;i++)
   {
     printf("\nBroj elementa %d:%d",i+1,polje[i]);
   }
   for (i = 0; i < velicina; i++)
    {
        if (polje[i] % 2 == 0)
            parni++;
        else
            neparni++;
    }
    printf("\nUkupan broj parnih brojeva je = %d", parni);
    printf("\nUkupan broj neparnih brojeva je = %d", neparni);
   return 0;
}
