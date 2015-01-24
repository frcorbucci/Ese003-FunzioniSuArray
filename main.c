#include <stdio.h>
#include <stdlib.h>

const int n=5;//dimensione dell'array

int max(int valori[], int dimensione)
{
    //descrizione delle variabili
  int risultato = int min; //assegno alla variabile "risultato" il valore minimo 
  int pippo=0; //pippo è utilizzato come "dimensione" 
  //faccio il ciclo while per leggere tutti i valori
  while (ru<dimensione)
  {
        pippo++
        //if è stato utilizzato per asseganre alla variabile risultato il valore massimo
        if (risultato < valori[pippo]);
        {
             risultato = valori[pippo];
        }
  }    
    return risultato,   
}
int min(int valori[], int dimensione)
{
    //descrizione della variabile
    int risultato = int max;//assegno alla variabile "risultato" il valore massimo
    int pippo=0;//pippo è utilizzato come "dimensione" 
    //faccio il ciclo while per leggere tutti i valori
    while(pippo<dimensione) 
    {
         pippo++
         //if è stato utilizzato per asseganre alla variabile risultato il valore minimo
        if(risultato > valori[pippo])
         {
            risultato = valori[pippo];
         }   
    }
     return risultato,  
}
float med (int valori[], int dimensione)
{
      //descrizione della variabile
    float risultato=0;
    int pippo=0;//pippo è utilizzato come "dimensione" 
    float ciccio;//"ciccio" è utilizzato come accomulatore del risultato ottenuto
    //faccio il ciclo while per leggere tutti i valori
          while (pippo<dimensione) 
          {
             pippo++
             risultato+=valori[pippo]; /*la formula è utilizzata per sommare i valori inseriti dall'utente e trasferirli 
             nella variabile "risultato"*/
          }
    
    ciccio=risultato/dimensione;
    return risultato;
}

int main () {
    //descrizione della variabile
    int risultato, max, min, pippo = 0; //
    float med=0;//
 //il ciclo while è utilizzato per fare scrivere i numeri dall'utente
     while (risultato<n)
     {
      printf ("\nInserisci il valore intero: %d: ", risultato);
      scanf("%d", &(pippo[risultato]));
      risultato++     
     }
     //assegno alle variabili "max, min e med" a valori e dimensioni
    max = max(pippo, n);
    min = min(pippo, n);
    med = med(pippo, n);
    
   printf("Il valore MASSIMO e' %d.\n", max);
    printf("Il valore MINIMO e' %d.\n", min);
    printf("Il valore MEDIO e' %f.\n", med);
 
 return 0;       
}