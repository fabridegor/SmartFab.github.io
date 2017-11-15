/*
  Autore: Golia Simone
  Consegna: Utilizzare la funzione showInputDialog per visualizzare una finestra
            dove l'utente deve inserire la lunghezza di un array.
            Una volta inserita la lunghezza bisogna visualizzare una dialog per
            ogni elemento dell'array, dove l'utente inserisce un valore da
            assegnare all'elemento. 
*/
import javax.swing.*;

public class Main {

    public static void main(String[] args) {
        int intDimensioneArray=0;
        /*
            Visualizzo un Input Dialog dove l'utente inserira' la dimensione dell'array
            e converto la stringa in un intero
         */
        String strValoreInserito = JOptionPane.showInputDialog("Inserisci la dimensione dell'array");
        try {
            intDimensioneArray = Integer.parseInt(strValoreInserito);        //Converto la stringa inserita in un intero
        }catch (NumberFormatException e){
            System.err.println("E' stato inserito un valore non valido");
            e.printStackTrace();
            System.exit(-1);
        }

        int[] array = new int[intDimensioneArray];  //Creo l'array vuoto
        /*
            Visualizzo un Input Dialog per ogni elemento dell'array e lo vado a inserire in quest'ultimo.
         */
        for(int i=0; i<intDimensioneArray; i++){
            strValoreInserito = JOptionPane.showInputDialog("Inserisci l'elemento "+(i+1));
            try {
                int intValore = Integer.parseInt(strValoreInserito);        //Converto la stringa inserita in un intero
                array[i] = intValore;                                       //Carico il valore convertito nell'array
            }catch (NumberFormatException e){
                System.err.println("E' stato inserito un valore non valido");
                e.printStackTrace();
                System.exit(-1);
            }
            System.out.println(array[i]);
        }
    }
}
