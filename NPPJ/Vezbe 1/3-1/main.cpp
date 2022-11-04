#include <iostream>

using namespace std;

int fun(int, int = 50);

int main()
{
	cout << fun(5) << endl;
	cout << fun(5, 20) << endl;
	cout << fun(10, 1000) << endl;

	return 0;
}

int fun(int brojKarata, int cenaKarte)
{
	return brojKarata * cenaKarte;
}