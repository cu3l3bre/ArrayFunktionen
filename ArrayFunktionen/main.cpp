//Arrayfunktionen
//
//Schreiben Sie eine kleine Funktionsbibliothek, die verschiedene Funktionen bereitstellt, um mit Ganzzahlenarrays zu arbeiten.Dabei sollen im Hauptprogramm(main) verschiedene Arrays zu Testzwecken fest programmiert werden(z.B: int myArray[] = { 1,2,3 };
//int array2[100] = { 0 }; ein Array mit den Werten von 1 - 100 und weitere, eigene Testfälle)
//
//Schreiben Sie dann folgende Funktionen, wobei Sie selbst überlegen sollen, welche Parameter übergeben werden müssen und ob es einen Rückgabetyp gibt(return …) Wählen Sie aussagekräftige Namen für Ihre Funktionen und denken Sie an die Übergabe der Elementanzahl.
//
//a) Berechnung der Gesamtsumme aller Werte
//b) Setzen aller Werte auf 0
//c) Setzen aller Werte auf einen übergebenen Wert
//c) Suchen, ob eine bestimmte Zahl mindestens einmal vorkommt
//d) Zählen, wie oft eine bestimmte Zahl im Array vorhanden ist
//e) Verdoppeln aller Werte im übergebenen Array
//f) Reihenfolge aller Zahlen vertauschen


#include <iostream>
#include "funktionen.h"


using namespace std;


int main() {


	// Definition der Groessen der Arrays
	const int AnahlElemneteArray1 = 20;
	const int AnahlElemneteArray2 = 3;
	const int AnahlElemneteArray3 = 50;


//	int Array1[10] = {1,2,3,4,5,6,7,8,9,10};
	int Array1[AnahlElemneteArray1] = {};
	int Array2[AnahlElemneteArray2] = {};
	int Array3[AnahlElemneteArray3] = {};

#pragma region Array1

	cout << "Aufgaben fuer das erste Array" << endl;

	FuelleArray(Array1, AnahlElemneteArray1);
	ZeigeArrayWerte(Array1, AnahlElemneteArray1);
	BerechneArraySumme(Array1, AnahlElemneteArray1);
	//SetzeArrayWerteNull(Array1, AnahlElemneteArray1);
	//ZeigeArrayWerte(Array1, AnahlElemneteArray1);
	//SetzeArrayWerteWert(Array1, AnahlElemneteArray1, 11);
	//ZeigeArrayWerte(Array1, AnahlElemneteArray1);
	ExistiertZahlInArray(Array1, AnahlElemneteArray1, 2);
	ZaehleHaeufigkeitInArray(Array1, AnahlElemneteArray1, 8);
	VerdoppleArrayWerte(Array1, AnahlElemneteArray1);
	ZeigeArrayWerte(Array1, AnahlElemneteArray1);
	TauscheArrayReihenfolge(Array1, AnahlElemneteArray1);
	ZeigeArrayWerte(Array1, AnahlElemneteArray1);

	cout << endl;

#pragma endregion



#pragma region Array2

	cout << "Aufgaben fuer das zweite Array" << endl;

	FuelleArray(Array2, AnahlElemneteArray2);
	ZeigeArrayWerte(Array2, AnahlElemneteArray2);
	BerechneArraySumme(Array2, AnahlElemneteArray2);
	//SetzeArrayWerteNull(Array2, AnahlElemneteArray2);
	//ZeigeArrayWerte(Array2, AnahlElemneteArray2);
	//SetzeArrayWerteWert(Array2, AnahlElemneteArray2, 22);
	//ZeigeArrayWerte(Array2, AnahlElemneteArray2);
	ExistiertZahlInArray(Array2, AnahlElemneteArray2, 2);
	ZaehleHaeufigkeitInArray(Array2, AnahlElemneteArray2, 8);
	VerdoppleArrayWerte(Array2, AnahlElemneteArray2);
	ZeigeArrayWerte(Array2, AnahlElemneteArray2);
	TauscheArrayReihenfolge(Array2, AnahlElemneteArray2);
	ZeigeArrayWerte(Array2, AnahlElemneteArray2);

	cout << endl;

#pragma endregion


#pragma region Array3

	cout << "Aufgaben fuer das dritte Array" << endl;

	FuelleArray(Array3, AnahlElemneteArray3);
	ZeigeArrayWerte(Array3, AnahlElemneteArray3);
	BerechneArraySumme(Array3, AnahlElemneteArray3);
	//SetzeArrayWerteNull(Array3, AnahlElemneteArray3);
	//ZeigeArrayWerte(Array3, AnahlElemneteArray3);
	//SetzeArrayWerteWert(Array3, AnahlElemneteArray3, 33);
	//ZeigeArrayWerte(Array3, AnahlElemneteArray3);
	ExistiertZahlInArray(Array3, AnahlElemneteArray3, 2);
	ZaehleHaeufigkeitInArray(Array3, AnahlElemneteArray3, 8);
	VerdoppleArrayWerte(Array3, AnahlElemneteArray3);
	ZeigeArrayWerte(Array3, AnahlElemneteArray3);
	TauscheArrayReihenfolge(Array3, AnahlElemneteArray3);
	ZeigeArrayWerte(Array3, AnahlElemneteArray3);

	cout << endl;

#pragma endregion


	system("pause");
	return 0;
}