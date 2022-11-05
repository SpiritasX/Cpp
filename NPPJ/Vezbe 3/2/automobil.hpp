#ifndef AUTOMOBIL_HPP_INCLUDED
#define AUTOMOBIL_HPP_INCLUDED

#include "menjac.hpp"
#include "skoljka.hpp"

class Automobil
{
private:
	Menjac menjac;
	Skoljka skoljka;

public:
	Automobil() {}
	Automobil(TipMenjaca tipMenjaca, int brojBrzina, BojaSkoljke bojaSkoljke) : menjac(brojBrzina, tipMenjaca), skoljka(bojaSkoljke) {}
	Automobil(const Automobil& automobil) : menjac(automobil.menjac), skoljka(automobil.skoljka) {}

	int getBrojBrzina() const { return menjac.getBrojBrzina(); }
	TipMenjaca getTipMenjaca() const { return menjac.getTip(); }
	BojaSkoljke getBoja() const { return skoljka.getBoja(); }

	bool setBrojBrzina(int brojBrzina) { return menjac.setBrojBrzina(brojBrzina); }
	void setBoja(BojaSkoljke bojaSkoljke) { skoljka.setBoja(bojaSkoljke); }
	void setTipMenjaca(TipMenjaca tipMenjaca) { menjac.setTip(tipMenjaca); }
};

#endif
