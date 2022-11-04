#include <iostream>

using namespace std;

int main()
{
	int sum = 0, temp;

	do
	{
		cout << "Unesite broj (razlicit od 0)\n> ";
		cin >> temp;

		sum += temp;
	} while (temp != 0);

	cout << "Suma vasih brojeva je " << sum << endl;

	return 0;
}