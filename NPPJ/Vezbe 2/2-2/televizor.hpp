#ifndef TELEVIZOR_HPP_INCLUDED
#define TELEVIZOR_HPP_INCLUDED

enum StanjeTelevizora
{
	UKLJUCEN,
	ISKLJUCEN,
	POKVAREN
};

class Televizor
{
private:
	StanjeTelevizora stanje;
	int zvuk;
	int kanal;

public:
	StanjeTelevizora getStanje() const { return stanje; }
	int getZvuk() const { return zvuk; }
	int getKanal() const { return kanal; }

	Televizor() : stanje(ISKLJUCEN), zvuk(0), kanal(1) {}
	Televizor(const Televizor& televizor) : stanje(televizor.stanje), zvuk(televizor.zvuk), kanal(televizor.kanal) {}

	bool ukljuci()
	{
		if (stanje == ISKLJUCEN)
		{
			stanje = UKLJUCEN;
			return true;
		}
		return false;
	}

	bool iskljuci()
	{
		if (stanje == UKLJUCEN)
		{
			stanje = ISKLJUCEN;
			zvuk = 0;
			kanal = 1;
			return true;
		}
		return false;
	}

	bool pokvari()
	{
		switch (stanje)
		{
		case UKLJUCEN:
		case ISKLJUCEN:
			stanje = POKVAREN;
			zvuk = 0;
			kanal = 1;
			return true;
		case POKVAREN:
			return false;
		}
	}

	bool popravi()
	{
		if (stanje == POKVAREN)
		{
			stanje = ISKLJUCEN;
			zvuk = 0;
			kanal = 1;
			return true;
		}
		return false;
	}

	bool pojacajZvuk()
	{
		zvuk++;

		if (zvuk > 20 || stanje != UKLJUCEN)
		{
			zvuk--;
			return false;
		}

		return true;
	}

	bool smanjiZvuk()
	{
		zvuk--;

		if (zvuk < 0 || stanje != UKLJUCEN)
		{
			zvuk++;
			return false;
		}

		return true;
	}

	bool sledeciKanal()
	{
		kanal++;

		if (kanal > 5 || stanje != UKLJUCEN)
		{
			kanal--;
			return false;
		}

		return true;
	}

	bool prethodniKanal()
	{
		kanal--;

		if (kanal < 0 || stanje != UKLJUCEN)
		{
			kanal++;
			return false;
		}

		return true;
	}
};

#endif