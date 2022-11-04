#include <iostream>

using namespace std;

int main()
{
	int max = 0, temp;

	do
	{
		cout << "Unesite broj veci od 0 (0 za kraj)\n> ";
		cin >> temp;

		if (temp > max)
			max = temp;
	} while (temp != 0);

	cout << "Najveci uneti broj je " << max << endl;

	return 0;
}