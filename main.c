#include <stdio.h>

int main(void)
{
   float voto1, voto2, voto3, media;
   printf ("Inserisci il primo voto : ", voto1);
   scanf ("%f", &voto1);
   printf ("Inserisci il secondo voto : ", voto2);
   scanf ("%f", &voto2);
   printf ("Inserisci il terzo voto : ", voto3);
   scanf ("%f", &voto3);
   media = (voto1 + voto2 + voto3) / 3;
   printf ("La media tra i tre voti è di %.2f : ", media);
   return 0;
}
