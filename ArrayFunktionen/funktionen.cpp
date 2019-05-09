
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
void SetzeArrayWerteWert(int* Array, int AnzahlElemente, int Wert)
{
	for (int i = 0; i < AnzahlElemente; i++)
	{
		*(Array + i) = Wert;
	}
}


//c) Suchen, ob eine bestimmte Zahl mindestens einmal vorkommt
//*****************************************************************************************************
// Funktion, um zu pruefen ob ein vorgegeber Wert im Array existiert								//
//*****************************************************************************************************
void ExistiertZahlInArray(int* Array, int AnzahlElemente, int Wert)
{
	bool WertExistiert = false;

	for (int i = 0; i < AnzahlElemente; i++)
	{
		if (*(Array + i) == Wert)
		{
			WertExistiert = true;
		}
	}

	if (WertExistiert)
	{
		cout << "Der gesuchte Wert " << Wert << " ist im Array vorhanden!" << endl;
	}
	else
	{
		cout << "Der gesuchte Wert " << Wert << " ist im Array NICHT vorhanden!" << endl;
	}
}



//d) Zählen, wie oft eine bestimmte Zahl im Array vorhanden ist
//*****************************************************************************************************
// Funktion, um zu die Haeufigkeit einer Zahl im Array zu zaehlen									//
//*****************************************************************************************************
void ZaehleHaeufigkeitInArray(int* Array, int AnzahlElemente, int Wert)
{
	int AnzahlGesuchterWert = 0;

	for (int i = 0; i < AnzahlElemente; i++)
	{
		if (*(Array + i) == Wert)
		{
			AnzahlGesuchterWert++;
		}
	}
	cout << "Der gesuchte Wert " << Wert <<  " ist im Array " << AnzahlGesuchterWert << " mal vorhanden!" << endl;
}



//e) Verdoppeln aller Werte im übergebenen Array
//*****************************************************************************************************
// Funktion, um zu die Werte in einem Array zu verdoppeln											//
//*****************************************************************************************************
void VerdoppleArrayWerte(int* Array, int AnzahlElemente)
{
	for (int i = 0; i < AnzahlElemente; i++)
	{
		*(Array + i) = (*(Array + i)) * 2;
	}
}




//f) Reihenfolge aller Zahlen vertauschen
//*****************************************************************************************************
// Funktion, um zu die Reihenfolge der Werte in einem Array zu tauschen								//
//*****************************************************************************************************
void TauscheArrayReihenfolge(int* Array, int AnzahlElemente)
{
	int* TempArray = new int[AnzahlElemente];
	
	// Umkopieren der Werte des Arrays auf ein Temp Array
	for (int i = 0; i < AnzahlElemente; i++)
	{
		*(TempArray + i) = *(Array + i);
	}


	for (int i = 0; i < AnzahlElemente; i++)
	{
		*(Array + i) = *(TempArray + ((AnzahlElemente-1) - i));
	}

	delete TempArray;
}




