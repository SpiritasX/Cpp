#include <iostream>
#include "machine.hpp"

using namespace std;

void printInfo(const Machine&);
int meni();

int main()
{
	Machine machine;

	do
	{
		switch (meni())
		{
		case 1:
			printInfo(machine);
			break;
		case 2:
			if (!machine.metodaX())
				cout << "Nije moguce izvrsiti X.\n";
			break;
		case 3:
			if (!machine.metodaY())
				cout << "Nije moguce izvrsiti Y.\n";
			break;
		case 4:
			if (!machine.metodaZ())
				cout << "Nije moguce izvrsiti Z.\n";
			break;
		case 5:
			if (!machine.metodaW())
				cout << "Nije moguce izvrsiti W.\n";
			break;
		case 6:
			if (!machine.plus())
				cout << "Nije moguce izvrsiti plus.\n";
			break;
		case 7:
			if (!machine.minus())
				cout << "Nije moguce izvrsiti minus.\n";
			break;
		case 8:
			return 0;
		}

		getchar();
		getchar();
		system("clear");
	} while (true);
}

void printInfo(const Machine& machine)
{
	cout << "Machine info:" << endl;
	cout << "\tCurrent state = ";
	switch (machine.getCurrentState())
	{
	case sA:
		cout << "sA" << endl;
		break;
	case sB:
		cout << "sB" << endl;
		break;
	case sC:
		cout << "sC" << endl;
		break;
	case sD:
		cout << "sD" << endl;
		break;
	}
	cout << "\tValue = " << machine.getValue() << endl;
}

int meni()
{
	int izbor;

	cout << "1. Ispis informacija\n";
	cout << "2. X\n";
	cout << "3. Y\n";
	cout << "4. Z\n";
	cout << "5. W\n";
	cout << "6. Plus\n";
	cout << "7. Minus\n";
	cout << "8. Zavrsi program\n";

	do
	{
		cout << "> ";
		cin >> izbor;
	} while (izbor < 1 || izbor > 8);

	return izbor;
}