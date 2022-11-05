#include <iostream>
#include "automobil.hpp"

using namespace std;

int main()
{
	Skoljka skoljka, skoljka2(CRVENA), skoljka3(skoljka);
	Menjac menjac, menjac2(5, MANUELNI), menjac3(menjac2);
	Automobil automobil, automobil2(MANUELNI, 6, ZELENA), automobil3(automobil);

	cout << skoljka.getBoja() << " " << skoljka2.getBoja() << " " << skoljka3.getBoja() << endl;
	skoljka.setBoja(ZELENA);
	cout << skoljka.getBoja() << " " << skoljka2.getBoja() << " " << skoljka3.getBoja() << endl;

	cout << menjac.getBrojBrzina()  << " " << menjac.getTip() << " ";
	cout << menjac2.getBrojBrzina() << " " << menjac2.getTip() << " ";
	cout << menjac3.getBrojBrzina() << " " << menjac3.getTip() << " ";
	menjac3.setBrojBrzina(6); menjac3.setTip(AUTOMATIK);
	cout << menjac3.getBrojBrzina() << " " << menjac3.getTip() << endl;

	cout << automobil.getBoja()  << " " << automobil.getBrojBrzina()  << " " << automobil.getTipMenjaca()  << " ";
	cout << automobil2.getBoja() << " " << automobil2.getBrojBrzina() << " " << automobil2.getTipMenjaca() << " ";
	cout << automobil3.getBoja() << " " << automobil3.getBrojBrzina() << " " << automobil3.getTipMenjaca() << " ";
	automobil2.setBoja(CRVENA); automobil2.setBrojBrzina(5); automobil2.setTipMenjaca(AUTOMATIK);
	cout << automobil2.getBoja() << " " << automobil2.getBrojBrzina() << " " << automobil2.getTipMenjaca() << endl;

	return 0;
}