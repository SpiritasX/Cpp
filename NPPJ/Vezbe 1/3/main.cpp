#include <iostream>
#include <cmath>

using namespace std;

float fun(int);

int main()
{
	int n;

	cout << "Unesite n\n> ";
	cin >> n;

	cout << "Sum = " << fun(n);

	return 0;
}

float fun(int n)
{
	float sum = 0;
	for (int i = 1; i <= n; i++)
		sum += sqrt(i);
	return int(sum*100)/100.0;
}