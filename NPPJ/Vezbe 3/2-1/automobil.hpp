#ifndef AUTOMOBIL_HPP_INCLUDED
#define AUTOMOBIL_HPP_INCLUDED

#include "menjac.hpp"
#include "skoljka.hpp"

enum StanjeAutomobila
{
	UGASEN,
	POKVAREN,
	UPALJEN
};

class Automobil
{
private:
	Menjac menjac;
	Skoljka skoljka;
	StanjeAutomobila stanje;
	int brzina;

public:
	Automobil()
	{
		this->stanje = UGASEN;
		this->brzina = 1;
	}
	Automobil(TipMenjaca tipMenjaca, int brojBrzina, int brzina, BojaSkoljke bojaSkoljke, StanjeAutomobila stanje) : menjac(brojBrzina, tipMenjaca), skoljka(bojaSkoljke)
	{
		this->stanje = stanje;
		this->brzina = brzina;
	}
	Automobil(const Automobil& automobil) : menjac(automobil.menjac), skoljka(automobil.skoljka), stanje(automobil.stanje), brzina(automobil.brzina) {}

	int getBrojBrzina() const { return menjac.getBrojBrzina(); }
	TipMenjaca getTipMenjaca() const { return menjac.getTip(); }
	BojaSkoljke getBoja() const { return skoljka.getBoja(); }

	bool setBrojBrzina(int brojBrzina) { return menjac.setBrojBrzina(brojBrzina); }
	void setBoja(BojaSkoljke bojaSkoljke) { skoljka.setBoja(bojaSkoljke); }
	void setTipMenjaca(TipMenjaca tipMenjaca) { menjac.setTip(tipMenjaca); }

	bool upali()
	{
		if (stanje == UGASEN)
		{
			stanje = UPALJEN;
			return true;
		}
		return false;
	}

	bool ugasi()
	{
		if (stanje == UPALJEN)
		{
			stanje = UGASEN;
			brzina = 0;
			return true;
		}
		return false;
	}

	bool pokvari()
	{
		if (stanje != POKVAREN)
		{
			stanje = POKVAREN;
			brzina = 0;
			return true;
		}
		return false;
	}

	bool popravi()
	{
		if (stanje == POKVAREN)
		{
			stanje = UGASEN;
			brzina = 0;
			return true;
		}
		return false;
	}

	bool povecajBrzinu()
	{
		brzina++;

		if (brzina > menjac.getBrojBrzina() || stanje != UPALJEN)
		{
			brzina--;
			return false;
		}

		return true;
	}

	bool smanjiBrzinu()
	{
		brzina--;

		if (brzina < 1 || stanje != UPALJEN)
		{
			brzina++;
			return false;
		}

		return true;
	}

	friend void print(Automobil);
};

#endif
