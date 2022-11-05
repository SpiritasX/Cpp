#ifndef VALJAK_HPP_INCLUDED
#define VALJAK_HPP_INCLUDED

#include "krug.hpp"
#include "pravougaonik.hpp"

class Valjak
{
private:
	Krug baza;
	Pravougaonik omotac;

public:
	Valjak(double r = 1, double h = 1) : baza(r), omotac(h, baza.getO()) {}

	double getR() const { return baza.getR(); }
	double getH() const { return omotac.getA(); }
	double getP() const { return 2 * baza.getP() + omotac.getP(); }
	double getV() const { return baza.getP() * omotac.getA(); }
};

#endif