enum StanjeRerne
{
	ISKLJUCENA,
	UKLJUCENA,
	POKVARENA
};

class Rerna
{
private:
	StanjeRerne trenutnoStanje;
	int temperatura;

public:
	Rerna()
	{
		temperatura = 0;
		trenutnoStanje = ISKLJUCENA;
	}

	StanjeRerne getTrenutnoStanje() const { return trenutnoStanje; }
	int getTemperatura() const { return temperatura; }

	bool ukljuci()
	{
		switch (trenutnoStanje)
		{
		case ISKLJUCENA:
			trenutnoStanje = UKLJUCENA;
			temperatura = 20;
			return true;
		case UKLJUCENA:
		case POKVARENA:
			return false;
		}
	}

	bool iskljuci()
	{
		switch (trenutnoStanje)
		{
		case UKLJUCENA:
			trenutnoStanje = ISKLJUCENA;
			temperatura = 0;
			return true;
		case ISKLJUCENA:
		case POKVARENA:
			return false;
		}
	}

	bool pokvari()
	{
		switch (trenutnoStanje)
		{
		case POKVARENA:
			return false;
		case ISKLJUCENA:
		case UKLJUCENA:
			trenutnoStanje = POKVARENA;
			temperatura = 0;
			return true;
		}
	}

	bool popravi()
	{
		switch (trenutnoStanje)
		{
		case POKVARENA:
			trenutnoStanje = ISKLJUCENA;
			temperatura = 0;
			return true;
		case ISKLJUCENA:
		case UKLJUCENA:
			return false;
		}
	}

	bool pojacajTemperaturu()
	{
		temperatura += 20;

		if (temperatura > 220 || trenutnoStanje != UKLJUCENA)
		{
			temperatura -= 20;
			return false;
		}

		return true;
	}

	bool smanjiTemperaturu()
	{
		temperatura -= 20;

		if (temperatura < 0 || trenutnoStanje != UKLJUCENA)
		{
			temperatura += 20;
			return false;
		}

		return true;
	}
};