#include <cstdlib>

class Kocka
{
private:
	int strana;

public:
	Kocka()
	{
		this->strana = 1;
	}

	Kocka(int strana)
	{
		this->strana = strana;
	}

	Kocka(const Kocka& kocka)
	{
		this->strana = kocka.strana;
	}

	int getVrednost() const { return strana; }

	void baci()
	{
		strana = rand() % 6 + 1;
	}
};