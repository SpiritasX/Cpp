#include <iostream>

using namespace std;

enum Tip
{
	IZNAD,
	ISPOD,
	NA
};

void unos(int**, int);
int suma(int**, int, Tip);

int main()
{
	int n;

	cout << "Unesite velicinu kvadratne matrice\n> ";
	cin >> n;

	int** matrica = new int*[n];
	for (int i = 0; i < n; i++)
		matrica[i] = new int[n];

	unos(matrica, n);

	for (int i = 0; i < n; i++)
	{
		cout << "[ ";
		for (int j = 0; j < n; j++)
			cout << matrica[i][j] << " ";
		cout << "]\n";
	}

	cout << "Iznad = " << suma(matrica, n, IZNAD) << endl;
	cout << "Ispod = " << suma(matrica, n, ISPOD) << endl;
	cout << "Na = " << suma(matrica, n, NA) << endl;

	for (int i = 0; i < n; i++)
		delete[] matrica[i];
	delete[] matrica;

	return 0;
}

void unos(int** matrica, int n)
{
	cout << "Unesite elemente matrice\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "\tmatrica[" << i << "][" << j << "] = ";
			cin >> matrica[i][j];
		}
	}
}

int suma(int** matrica, int n, Tip tip)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j > i && tip == IZNAD)
				sum += matrica[i][j];
			if (i > j && tip == ISPOD)
				sum += matrica[i][j];
			if (i == j && tip == NA)
				sum += matrica[i][j];
		}
	}

	return sum;
}