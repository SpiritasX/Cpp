#include <iostream>
#include "automobil.hpp"

using namespace std;

void print(Automobil automobil)
{
	cout << "Automobil:\n";
	print(automobil.menjac);
	print(automobil.skoljka);
	cout << "Stanje automobila je " << automobil.stanje << " i trenutna brzina " << automobil.brzina << endl;
}

void print(Skoljka skoljka)
{
	cout << "Boja ove skoljke je ";
	switch (skoljka.bojaSkoljke)
	{
	case PLAVA:
		cout << "plava.\n";
		break;
	case CRVENA:
		cout << "crvena.\n";
		break;
	case ZELENA:
		cout << "zelena.\n";
		break;
	}
}

void print(Menjac menjac)
{
	cout << "Ovaj menjac ima " << menjac.brojBrzina << " brzina i tipa je " << menjac.tipMenjaca << ".\n";
}

int main()
{
	Skoljka skoljka, skoljka2(CRVENA), skoljka3(skoljka);
	Menjac menjac, menjac2(5, AUTOMATIK), menjac3(menjac2);
	Automobil automobil, automobil2(MANUELNI, 6, 4, ZELENA, UPALJEN), automobil3(automobil);

	cout << skoljka.getBoja() << " " << skoljka2.getBoja() << " " << skoljka3.getBoja() << endl;
	skoljka.setBoja(ZELENA);
	print(skoljka);
	cout << skoljka.getBoja() << " " << skoljka2.getBoja() << " " << skoljka3.getBoja() << endl;

	cout << menjac.getBrojBrzina() << " " << menjac.getTip() << " ";
	cout << menjac2.getBrojBrzina() << " " << menjac2.getTip() << " ";
	cout << menjac3.getBrojBrzina() << " " << menjac3.getTip() << " ";
	menjac3.setBrojBrzina(6); menjac3.setTip(AUTOMATIK);
	cout << menjac3.getBrojBrzina() << " " << menjac3.getTip() << endl;
	print(menjac2);

	cout << automobil.getBoja() << " " << automobil.getBrojBrzina() << " " << automobil.getTipMenjaca() << " ";
	cout << automobil2.getBoja() << " " << automobil2.getBrojBrzina() << " " << automobil2.getTipMenjaca() << " ";
	cout << automobil3.getBoja() << " " << automobil3.getBrojBrzina() << " " << automobil3.getTipMenjaca() << " ";
	automobil2.setBoja(CRVENA); automobil2.setBrojBrzina(5); automobil2.setTipMenjaca(AUTOMATIK);
	cout << automobil2.getBoja() << " " << automobil2.getBrojBrzina() << " " << automobil2.getTipMenjaca() << endl;
	print(automobil2);

	return 0;
}