#include <iostream>
#include "televizor.hpp"

using namespace std;

void ispis(const Televizor&);
int meni();

int main()
{
	Televizor televizor;

	do
	{
		switch (meni())
		{
		case 1:
			ispis(televizor);
			break;
		case 2:
			if (!televizor.ukljuci())
				cout << "Nije moguce ukljuciti televizor.\n";
			break;
		case 3:
			if (!televizor.iskljuci())
				cout << "Nije moguce iskljuciti televizor.\n";
			break;
		case 4:
			if (!televizor.pokvari())
				cout << "Nije moguce pokvariti televizor.\n";
			break;
		case 5:
			if (!televizor.popravi())
				cout << "Nije moguce popraviti televizor.\n";
			break;
		case 6:
			if (!televizor.pojacajZvuk())
				cout << "Nije moguce pojacati zvuk.\n";
			break;
		case 7:
			if (!televizor.smanjiZvuk())
				cout << "Nije moguce smanjiti zvuk.\n";
			break;
		case 8:
			if (!televizor.sledeciKanal())
				cout << "Nije moguce prebaciti kanal unapred.\n";
			break;
		case 9:
			if (!televizor.prethodniKanal())
				cout << "Nije moguce prebaciti kanal unazad.\n";
			break;
		case 10:
			Televizor televizor2(televizor);
			ispis(televizor2);
			return 0;
		}
		getchar();
		getchar();
		system("clear");
	} while (true);
}

void ispis(const Televizor& televizor)
{
	cout << "Televizor info:\n";
	cout << "\tStanje = ";
	switch (televizor.getStanje())
	{
	case UKLJUCEN:
		cout << "Ukljucen\n";
		break;
	case ISKLJUCEN:
		cout << "Iskljucen\n";
		break;
	case POKVAREN:
		cout << "Pokvaren\n";
		break;
	}
	cout << "\tZvuk = " << televizor.getZvuk() << endl;
	cout << "\tKanal = " << televizor.getKanal() << endl;
}

int meni()
{
	int izbor;

	cout << "1. Info\n";
	cout << "2. Ukljuci\n";
	cout << "3. Iskljuci\n";
	cout << "4. Pokvari\n";
	cout << "5. Popravi\n";
	cout << "6. Pojacaj zvuk\n";
	cout << "7. Smanji zvuk\n";
	cout << "8. Sledeci kanal\n";
	cout << "9. Prethodni kanal\n";
	cout << "10. Zavrsi program\n";

	do
	{
		cout << "> ";
		cin >> izbor;
	} while (izbor < 1 || izbor > 10);

	return izbor;
}