//Arrayfunktionen
//
//Schreiben Sie eine kleine Funktionsbibliothek, die verschiedene Funktionen bereitstellt, um mit Ganzzahlenarrays zu arbeiten.Dabei sollen im Hauptprogramm(main) verschiedene Arrays zu Testzwecken fest programmiert werden(z.B: int myArray[] = { 1,2,3 };
//int array2[100] = { 0 }; ein Array mit den Werten von 1 - 100 und weitere, eigene Testf�lle)
//
//Schreiben Sie dann folgende Funktionen, wobei Sie selbst �berlegen sollen, welche Parameter �bergeben werden m�ssen und ob es einen R�ckgabetyp gibt(return �) W�hlen Sie aussagekr�ftige Namen f�r Ihre Funktionen und denken Sie an die �bergabe der Elementanzahl.
//
//a) Berechnung der Gesamtsumme aller Werte
//b) Setzen aller Werte auf 0
//c) Setzen aller Werte auf einen �bergebenen Wert
//c) Suchen, ob eine bestimmte Zahl mindestens einmal vorkommt
//d) Z�hlen, wie oft eine bestimmte Zahl im Array vorhanden ist
//e) Verdoppeln aller Werte im �bergebenen Array
//f) Reihenfolge aller Zahlen vertauschen




#include <iostream>
#include "funktionen.h"

#define AnahlElemneteArray1 10;

using namespace std;


int main() {

	// Definition von verschiedenen Arrays
	//int AnahlElemneteArray1 = 10;
	int Array1[10] = {};


	// ein zweite Liste mit 3 Zahlen
	int Array2[3] = { 1,2,3 };



	FuelleArray(Array1, 10);
	ZeigeArrayWerte(Array1, 10);
	BerechneArraySumme(Array1, 10);
	SetzeArrayWerteNull(Array1, 10);
	ZeigeArrayWerte(Array1, 10);
	SetzeArrayWerteNull(Array1, 10, 20);
	ZeigeArrayWerte(Array1, 10);








	// Werte dieser 2. Liste anzeigen
	//ZeigeArrayWerte(Array2, 3);

	system("pause");
	return 0;
}