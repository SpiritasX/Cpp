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
	Menjac() : brojBrzina(3), tipMenjaca(MANUELNI) {}
	Menjac(int brojBrzina, TipMenjaca tipMenjaca) : brojBrzina(brojBrzina), tipMenjaca(tipMenjaca) {}
	Menjac(const Menjac& menjac) : brojBrzina(menjac.brojBrzina), tipMenjaca(menjac.tipMenjaca) {}

	int getBrojBrzina() const { return brojBrzina; }
	TipMenjaca getTip() const { return tipMenjaca; }

	void setTip(TipMenjaca tipMenjaca) { this->tipMenjaca = tipMenjaca; }
	bool setBrojBrzina(int brojBrzina) { this->brojBrzina = brojBrzina; }

	friend void print(Menjac);
};

#endif
