#include <iostream>

using namespace std;

enum Tip
{
	RASTUCE,
	OPADAJUCE
};

void unos(int*, int);
void sortiraj(int*, int, Tip);
void print(int*, int);

int main()
{
	int n;

	cout << "Unesite velicinu niza\n> ";
	cin >> n;

	int* niz = new int[n];

	unos(niz, n);

	print(niz, n);
	sortiraj(niz, n, RASTUCE);
	print(niz, n);
	sortiraj(niz, n, OPADAJUCE);
	print(niz, n);

	delete[] niz;

	return 0;
}

void unos(int* niz, int n)
{
	cout << "Unesite elemente niza\n";
	for (int i = 0; i < n; i++)
	{
		cout << "\tniz[" << i << "] = ";
		cin >> niz[i];
	}
}

void sortiraj(int* niz, int n, Tip tip)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (tip == RASTUCE)
			{
				if (niz[i] > niz[j])
					swap(niz[i], niz[j]);
			}
			else
				if (niz[i] < niz[j])
					swap(niz[i], niz[j]);
}

void print(int* niz, int n)
{
	cout << "[ ";
	for (int i = 0; i < n; i++)
		cout << niz[i] << " ";
	cout << "]" << endl;
}