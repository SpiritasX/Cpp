#ifndef MENJAC_HPP_INCLUDED
#define MENJAC_HPP_INCLUDED

enum TipMenjaca
{
	AUTOMATIK,
	MANUELNI
};

class Menjac
{
private:
	int brojBrzina;
	TipMenjaca tipMenjaca;

public:
	Menjac() : brojBrzina(5), tipMenjaca(AUTOMATIK) {}
	Menjac(int brojBrzina, TipMenjaca tipMenjaca) : brojBrzina(brojBrzina), tipMenjaca(tipMenjaca) {}
	Menjac(const Menjac& menjac) : brojBrzina(menjac.brojBrzina), tipMenjaca(menjac.tipMenjaca) {}

	int getBrojBrzina() const { return brojBrzina; }
	TipMenjaca getTip() const { return tipMenjaca; }

	void setTip(TipMenjaca tipMenjaca) { this->tipMenjaca = tipMenjaca; }
	bool setBrojBrzina(int brojBrzina)
	{
		switch (brojBrzina)
		{
		case 5:
		case 6:
			this->brojBrzina = brojBrzina;
			return true;
		default:
			return false;
		}
	}
};

#endif
