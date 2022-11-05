#ifndef SKOLJKA_HPP_INCLUDED
#define SKOLJKA_HPP_INCLUDED

enum BojaSkoljke
{
	PLAVA,
	CRVENA,
	ZELENA
};

class Skoljka
{
private:
	BojaSkoljke bojaSkoljke;

public:
	Skoljka() : bojaSkoljke(PLAVA) {}
	Skoljka(BojaSkoljke bojaSkoljke) : bojaSkoljke(bojaSkoljke) {}
	Skoljka(const Skoljka& skoljka) : bojaSkoljke(skoljka.bojaSkoljke) {}

	BojaSkoljke getBoja() const { return bojaSkoljke; }

	void setBoja(BojaSkoljke bojaSkoljke) { this->bojaSkoljke = bojaSkoljke; }

	friend void print(Skoljka);
};

#endif