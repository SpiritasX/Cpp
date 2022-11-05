#ifndef KRUG_HPP_INCLUDED
#define KRUG_HPP_INCLUDED

#include <cmath>

class Krug
{
private:
	double r;

public:
	Krug(double r = 1) : r(r) {}

	double getR() const { return r; }
	double getO() const { return 2 * r * 3.14159; }
	double getP() const { return r * r * 3.14159; }
};

#endif