#ifndef BROD_HPP_INCLUDED
#define BROD_HPP_INCLUDED

#include "motor.hpp"

enum StanjeBroda
{
	USIDREN,
	PLOVI,
	POKVAREN
};

class Brod
{
private:
	StanjeBroda stanje;
	Motor motor;
	int predjenoKilometara;
	int kolicinaGoriva;

public:
	Brod() : stanje(USIDREN), predjenoKilometara(0), kolicinaGoriva(0) {}

	StanjeBroda getStanje() const { return stanje; }
	int getBrzina() const { return motor.getBrzina(); }
	int getPredjenoKilometara() const { return predjenoKilometara; }
	int getKolicinaGoriva() const { return kolicinaGoriva; }

	bool pokvari()
	{
		if (stanje != POKVAREN)
		{
			stanje = POKVAREN;
			kolicinaGoriva = 0;
			motor.setBrzina(0);
			return true;
		}
		return false;
	}

	bool popravi()
	{
		if (stanje == POKVAREN)
		{
			stanje = USIDREN;
			motor.setBrzina(0);
			return true;
		}
		return false;
	}

	bool pokreni()
	{
		if (stanje == USIDREN)
		{
			stanje = PLOVI;
			return true;
		}
		return false;
	}

	bool zaustavi()
	{
		if (stanje == PLOVI)
		{
			stanje = USIDREN;
			motor.setBrzina(0);
			return true;
		}
		return false;
	}

	bool sipajGorivo()
	{
		if (stanje == USIDREN)
		{
			kolicinaGoriva += 2;

			if (kolicinaGoriva > 15)
				kolicinaGoriva = 15;

			return true;
		}
		return false;
	}

	bool povecajBrzinu()
	{
		if (stanje == PLOVI)
		{
			int temp = motor.getBrzina();
			if (temp < 5)
			{
				motor.setBrzina(temp + 1);
				return true;
			}
		}
		return false;
	}

	bool smanjiBrzinu()
	{
		if (stanje == PLOVI)
		{
			int temp = motor.getBrzina();
			if (temp > 0)
			{
				motor.setBrzina(temp - 1);
				return true;
			}
		}
		return false;
	}

	bool putuj()
	{
		if (stanje == PLOVI && kolicinaGoriva > 0)
		{
			kolicinaGoriva--;
			predjenoKilometara += 5 * motor.getBrzina();
			return true;
		}
		return false;
	}
};

#endif