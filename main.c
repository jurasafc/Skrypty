//Liczenie danego znaku w wyrazie
//Jerzy Debowski
//14.11.2018

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char znak[1];
    char wyraz[15];
    int i, suma=0,a,tablica[50],duze=0,male=0,cyfry=0;
    printf("Podaj wyraz: ");
    scanf("%s",wyraz)
    getchar();
    printf("Jaki znak chcesz policzyc: ");
    scanf("%s",znak);
    getchar();
    a=znak[0];
    //printf("%s",znak);
    for(i=0;i<=wyraz[i];i++)
    {
        tablica[i]=wyraz[i];
    }
    for(i=0;i<=wyraz[i];i++)
    {
        if(a==tablica[i])
        {
            suma=suma+1;
        }
        if(tablica[i]>=65 && tablica[i]<=90)
        {
            duze=duze+1;
        }
        if(tablica[i]>=97 && tablica[i]<=122)
        {
            male=male+1;
        }
        if(tablica[i]>=48 && tablica[i]<=57)
        {
            cyfry=cyfry+1;
        }
    }
     printf("\nW wyrazie %s znak %c wystepuje %d raz/y \n",wyraz,znak[0],suma);
     getch();
     printf("\nW wyrazie %s jest %d duzych liter",wyraz,duze);
     getch();
     printf("\nW wyrazie %s jest %d malych liter",wyraz,male);
     getch();
     printf("\nW wyrazie %s jest %d cyfr",wyraz,cyfry);

    return 0;
}
