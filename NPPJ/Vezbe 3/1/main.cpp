#include <iostream>
#include "valjak.hpp"

using namespace std;

int main()
{
	Valjak valjak, valjak2(2, 5);
	Krug krug, krug2(5);
	Pravougaonik pravougaonik, pravougaonik2(7, 7);
	
	cout << krug.getR() << " " << krug.getO() << " " << krug2.getP() << endl;

	cout << pravougaonik.getA() << " " << pravougaonik2.getB() << " " << pravougaonik.getO() << " " << pravougaonik2.getP() << endl;

	cout << valjak.getR() << " " << valjak2.getH() << " " << valjak.getP() << " " << valjak2.getV() << endl;

	return 0;
}