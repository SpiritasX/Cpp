#include <iostream>
#include "kocka.cpp"

using namespace std;

int meni();

int main()
{
	Kocka kocka;

	do
	{
		switch (meni())
		{
		case 1:
			kocka.baci();
			break;
		case 2:
			cout << kocka.getVrednost() << endl;
			break;
		case 3:
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

	cout << "1. Baci kockicu\n";
	cout << "2. Vidi vrednost kockice\n";
	cout << "3. Zavrsi program\n";

	do
	{
		cout << "> ";
		cin >> izbor;
	} while (izbor < 1 || izbor > 3);

	return izbor;
}