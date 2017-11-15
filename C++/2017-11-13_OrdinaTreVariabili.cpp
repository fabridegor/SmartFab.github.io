/*
  Autore: Simone Golia
  Consegna: Acquisire tre valori Primo, Secondo e Terzo e ordinarli in modo tale
            che alla stampa di questi ultimi si abbiano tre valori in ordine
            crescente.
*/

#include <iostream>

using namespace std;

int main(){
  int primo, secondo, terzo;

  //Leggo i valori
  cout << "Inserisci il primo valore: ";
  cin >> primo;
  cout << "Inserisci il secondo valore: ";
  cin >> secondo;
  cout << "Inserisci il terzo valore: ";
  cin >> terzo;

  if( terzo<primo ){    //Se il terzo e' minore del primo li scambio
    int tmp = terzo;
    terzo = primo;
    primo = tmp;
  }

  if( secondo<primo ){  //Se anche il secondo e' minore del primo li scambio
    int tmp = secondo;
    secondo = primo;
    primo = tmp;
  }

  /*
    A questo punto ho perforza il valore minore nella variabile primo.
    Quindi basta controllare tra secondo e terzo quale e' il minore e metterlo
    nella variabile secondo.
  */
  if( terzo<secondo ){
    int tmp = terzo;
    terzo = secondo;
    secondo = tmp;
  }

  cout << primo << "-" << secondo << "-" << terzo << endl;
  return 0;
}
