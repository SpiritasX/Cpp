#include <iostream>
#include "rerna.cpp"

using namespace std;

void ispisiRernu(const Rerna&);
int meni();

int main()
{
	Rerna rerna;

	do
	{
		switch (meni())
		{
		case 1:
			ispisiRernu(rerna);
			break;
		case 2:
			if (!rerna.ukljuci())
				cout << "Nije moguce ukljuciti rernu." << endl;
			break;
		case 3:
			if (!rerna.iskljuci())
				cout << "Nije moguce iskljuciti rernu." << endl;
			break;
		case 4:
			if (!rerna.pokvari())
				cout << "Nije moguce pokvariti rernu" << endl;
			break;
		case 5:
			if (!rerna.popravi())
				cout << "Nije moguce popraviti rernu." << endl;
			break;
		case 6:
			if (!rerna.pojacajTemperaturu())
				cout << "Nije moguce pojacati temperaturu." << endl;
			break;
		case 7:
			if (!rerna.smanjiTemperaturu())
				cout << "Nije moguce smanjiti temperaturu." << endl;
			break;
		case 8:
			return 0;
		}

		getchar();
		getchar();
		system("clear");
	} while (true);
}

void ispisiRernu(const Rerna& rerna)
{
	cout << "Info" << endl;
	cout << "\tTrenutno stanje: ";
	if (rerna.getTrenutnoStanje() == ISKLJUCENA)
		cout << "ISKLJUCENA" << endl;
	else if (rerna.getTrenutnoStanje() == UKLJUCENA)
		cout << "UKLJUCENA" << endl;
	else
		cout << "POKVARENA" << endl;
	cout << "\tTemperatura: " << rerna.getTemperatura() << endl;
}

int meni()
{
	int izbor;

	cout << "1. Info" << endl;
	cout << "2. Ukljuci rernu" << endl;
	cout << "3. Iskljuci rernu" << endl;
	cout << "4. Pokvari rernu" << endl;
	cout << "5. Popravi rernu" << endl;
	cout << "6. Povecaj temperaturu" << endl;
	cout << "7. Smanji temperaturu" << endl;
	cout << "8. Zavrsi program" << endl;

	do
	{
		cout << "> ";
		cin >> izbor;
	} while (izbor < 1 || izbor > 8);

	return izbor;
}