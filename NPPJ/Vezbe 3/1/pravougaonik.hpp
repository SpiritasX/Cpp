#ifndef PRAVOUGAONIK_HPP_INCLUDED
#define PRAVOUGAONIK_HPP_INCLUDED

class Pravougaonik
{
private:
	double a;
	double b;

public:
	Pravougaonik(double a = 1, double b = 1) : a(a), b(b) {}

	double getA() const { return a; }
	double getB() const { return b; }
	double getO() const { return 2 * (a + b); }
	double getP() const { return a * b; }
};

#endif
