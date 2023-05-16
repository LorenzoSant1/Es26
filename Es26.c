#include <stdio.h>
#include <string.h>
int
Funzione (char parola[], int lunghezza)
{
    int palindroma=1;
    char parola2[lunghezza];
    strcpy(parola2, parola);
    int j=lunghezza;
    for (int i = 0; i < lunghezza; i++)
    {
        j--;
      if (parola[i] != parola2[j])
	{
	  palindroma = 0;
	  break;
	}
    }
    return palindroma;

}
int
main (int argc, char *argv[])
{
  char parola[100];

  printf ("Inserisci una parola:");
  scanf ("%s", parola);
  int lunghezza = strlen (parola);
  int palindroma;
  palindroma=Funzione(parola, lunghezza);
  if (palindroma)
    {
      printf ("La parola inserita è palindroma.");
    }
  else
    {
      printf ("La parola inserita non è palindroma.");
    }

  return 0;
}
