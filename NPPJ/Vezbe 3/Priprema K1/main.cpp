#include <iostream>
#include "brod.hpp"

using namespace std;

int meni();
void ispisiMotor(const Motor&);
void ispisiBrod(const Brod&);

int main()
{
	Brod brod;
	Motor motor;

	do
	{
		switch (meni())
		{
		case 1:
			ispisiMotor(motor);
			break;
		case 2:
			ispisiBrod(brod);
			break;
		case 3:
			if (!brod.pokvari())
				cout << "Nije moguce pokvariti brod.\n";
			break;
		case 4:
			if (!brod.popravi())
				cout << "Nije moguce popraviti brod.\n";
			break;
		case 5:
			if (!brod.pokreni())
				cout << "Nije moguce pokrenuti brod.\n";
			break;
		case 6:
			if (!brod.zaustavi())
				cout << "Nije moguce zaustaviti brod.\n";
			break;
		case 7:
			if (!brod.sipajGorivo())
				cout << "Nije moguce sipati gorivo.\n";
			break;
		case 8:
			if (!brod.povecajBrzinu())
				cout << "Nije moguce povecati brzinu.\n";
			break;
		case 9:
			if (!brod.smanjiBrzinu())
				cout << "Nije moguce smanjiti brzinu.\n";
			break;
		case 10:
			if (!brod.putuj())
				cout << "Nije moguce putovati.\n";
			break;
		case 11:
			return 0;
		}

		getchar();
		getchar();
		system("clear");
	} while (true);
}

int meni()
{
	int izbor;

	cout << "1. Ispisi motor\n";
	cout << "2. Ispisi brod\n";
	cout << "3. Pokvari\n";
	cout << "4. Popravi\n";
	cout << "5. Pokreni\n";
	cout << "6. Zaustavi\n";
	cout << "7. Sipaj gorivo\n";
	cout << "8. Povecaj brzinu\n";
	cout << "9. Smanji brzinu\n";
	cout << "10. Putuj\n";
	cout << "11. Zavrsi program\n";

	do
	{
		cout << "> ";
		cin >> izbor;
	} while (izbor < 1 || izbor > 11);

	return izbor;
}

void ispisiMotor(const Motor& motor)
{
	cout << "--- Motor ---\n";
	cout << "Brzina: " << motor.getBrzina() << endl;
}

void ispisiBrod(const Brod& brod)
{
	cout << "--- Brod ---\n";
	cout << "Stanje: ";
	switch (brod.getStanje())
	{
	case PLOVI:
		cout << "PLOVI\n";
		break;
	case POKVAREN:
		cout << "POKVAREN\n";
		break;
	case USIDREN:
		cout << "USIDREN\n";
		break;
	}
	cout << "Predjeno kilometara: " << brod.getPredjenoKilometara() << endl;
	cout << "Kolicina goriva: " << brod.getKolicinaGoriva() << endl;
	cout << "--- Motor\n";
	cout << "Brzina: " << brod.getBrzina() << endl;
}