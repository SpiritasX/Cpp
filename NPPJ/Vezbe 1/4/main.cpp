#include <iostream>

using namespace std;

bool prestupna(int);

int main()
{
	cout << (prestupna(2004) ? "da" : "ne") << endl;
	cout << (prestupna(1800) ? "da" : "ne") << endl;
	cout << (prestupna(1900) ? "da" : "ne") << endl;
	cout << (prestupna(2000) ? "da" : "ne") << endl;
	cout << (prestupna(1600) ? "da" : "ne") << endl;

	return 0;
}

bool prestupna(int godina)
{
	cout << godina << " - ";
	if ((godina % 4 == 0) && (godina % 100 == 0 && godina % 400 != 0))
		return false;
	return true;
}