
#include <iostream>
#include "funktionen.h"

using namespace std;

//*****************************************************************************************************
// Funktion, um ein Array mit Startwerten von 1 bis Anzahl Elemente zu fuellen						//	
//*****************************************************************************************************
void FuelleArray(int* Array, int AnzahlElemente)
{
	for (int i = 0; i < AnzahlElemente; i++)
	{
		*(Array+i) = i + 1;
	}


}

//*****************************************************************************************************
// Funktion, um die Werte eines Arrays anzuzeigen													//
//*****************************************************************************************************
void ZeigeArrayWerte(int* Array, int AnzahlElemente)
{
	cout << "Das Array hat folgende Werte" << endl;
	// Schleife, um durch alle Werte der Liste zu gehen..
	for (int i = 0; i < AnzahlElemente; i++)
	{
		cout << *(Array+i) << endl;
	}
}



//a) Berechnung der Gesamtsumme aller Werte
//*****************************************************************************************************
// Funktion, um die Summe aller Werte eines Arrays zu berechnen										//
//*****************************************************************************************************
void BerechneArraySumme(int* Array, int AnzahlElemente)
{
	int Summe = 0;

	for (int i = 0; i < AnzahlElemente; i++)
	{
		Summe = Summe + *(Array + i);
	}
	cout << "Die Summe der Zahlen des Arrays ist: " << Summe << endl;
}




//b) Setzen aller Werte auf 0
//*****************************************************************************************************
// Funktion, um die Werte eines Arrays auf 0 zu setzen												//
//*****************************************************************************************************

void SetzeArrayWerteNull(int* Array, int AnzahlElemente)
{
	for (int i = 0; i < AnzahlElemente; i++)
	{
		*(Array + i) = 0;
	}
}



//c) Setzen aller Werte auf einen übergebenen Wert
//*****************************************************************************************************
// Funktion, um die Werte eines Arrays auf einen vorgegebenen Wert zu setzen						//
//*****************************************************************************************************
void SetzeArrayWerteNull(int* Array, int AnzahlElemente, int Wert)
{
	for (int i = 0; i < AnzahlElemente; i++)
	{
		*(Array + i) = Wert;
	}
}


//c) Suchen, ob eine bestimmte Zahl mindestens einmal vorkommt




//d) Zählen, wie oft eine bestimmte Zahl im Array vorhanden ist




//e) Verdoppeln aller Werte im übergebenen Array




//f) Reihenfolge aller Zahlen vertauschen

