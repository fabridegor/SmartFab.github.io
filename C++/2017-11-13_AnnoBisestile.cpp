/*
  Autore: Simone Golia
  Consegna: Acquisire un valore intero maggiore di 1582 e dire se si tratta di
            un anno bisestile o no.
            Un anno e' bisestile se e solo se si verificano le sequienti
            condizioni:
            E' un anno centenario e divisibile per 400 oppure se non e'
            centenario deve essere divisibile per 4.
*/

#include <iostream>

#define ANNO_MINIMO 1582

using namespace std;

int main(){
  int anno;

  //Leggo l'anno
  cout << "Inserisci l'anno: ";
  cin >> anno;

  if(anno < ANNO_MINIMO){               //Se l'anno non e' valido
    cerr << "Anno non valido" << endl;  //Stampo l'errore
    return -1;                          //Esco dal programma
  }

  if( (anno%100==0) && (anno%400==0) )       //Centenario e divisibile per 400
    cout << "L'anno " << anno << " risulta bisestile." << endl;
  else if( (anno%100!=0) && (anno%4==0) )    //Non centenario e divisibile per 4
    cout << "L'anno " << anno << " risulta bisestile." << endl;
  else                                       //Nessuno dei due casi
    cout << "L'anno " << anno << " non risulta bisestile." << endl;

  return 0;
}
