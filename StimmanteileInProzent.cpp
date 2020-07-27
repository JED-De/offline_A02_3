#include <iostream>
using namespace std;

int gesamt;
int erster;
int zweiter;
int dritter;

int main()
{
	cout << "Bitte geben Sie die Gesamtzahl der abgegebenen gueltigen Stimmen ein: ? ";
	cin >> gesamt;
	cout << "Bitte geben Sie die Anzahl Stimmen des ersten Kandidaten ein: ? ";
	cin >> erster;
	cout << "Bitte geben Sie die Anzahl Stimmen des zweiten Kandidaten ein: ? ";
	cin >> zweiter;
	dritter = gesamt - (erster + zweiter);
	cout << "Auf den dritten Kandidaten sind somit " << dritter << " Stimmen entfallen." << endl;

	//Teilaufgabe b
	double pro_erster = double(100 / double(gesamt) * double(erster));
	double pro_zweiter = double(100 / double(gesamt) * double(zweiter));
	double pro_dritter = double(100 / double(gesamt) * double(dritter));
	cout << "Kandidat 1 erhielt " << pro_erster << "% der Stimmen." << endl;
	cout << "Kandidat 2 erhielt " << pro_zweiter << "% der Stimmen." << endl;
	cout << "Kandidat 3 erhielt " << pro_dritter << "% der Stimmen." << endl;
	   
	system("PAUSE");
	return 0;
}