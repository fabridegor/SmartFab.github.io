/*
  Autore: Simone Golia
  Consegna: Acquisire due valori positivi e indicare se uno dei due valori e' un
            multiplo del dell'altro inserito.
            Un numero a e' divisibile per b se e solo se a e' divisibile per b.
*/

#include <iostream>

using namespace std;

int main(){
  int primo, secondo;

  //Leggo i valori
  cout << "Inserisci il primo valore: ";
  cin >> primo;
  cout << "Inserisci il secondo valore: ";
  cin >> secondo;

  if( primo<0 || secondo<0 ){              //Sono stati inseriti valori negativi
    cerr << "Sono accettati solo valori positivi.\n";       // '\n' = nuovalinea
    return -1;
  }

  if( primo < secondo ){               //Se il primo e' minore vengono scambiati
    int tmp = primo;
    primo = secondo;
    secondo = tmp;
  }

  if( primo%secondo == 0 )      //Se primo e' divisibile per secondo e' multiplo
    cout << "Il valore " << primo << " e' multiplo di " << secondo << endl;
  else                          //altrimenti non e' multiplo
    cout << "Il valore " << primo << " non e' multiplo di " << secondo << endl;

  return 0;
}
