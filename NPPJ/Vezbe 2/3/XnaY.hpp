#ifndef XNAY_HPP_INCLUDED
#define XNAY_HPP_INCLUDED

#include <cmath>

class XnaY
{
private:
	int x;
	int y;
	double x_y;
public:
	XnaY() : x(1), y(1), x_y(1) {}
	XnaY(int x, int y) : x(x), y(y), x_y(pow(x, y)) {}
	XnaY(const XnaY& xnay) : x(xnay.x), y(xnay.y), x_y(xnay.x_y) {}

	int getX() const { return x; }
	int getY() const { return y; }
	double getXnaY() const { return x_y; }
	
	void setX(int x) { this->x = x; setX_Y(x, y); }
	void setY(int y) { this->y = y; setX_Y(x, y); }
	void setX_Y(int x, int y) { this->x = x; this->y = y; this->x_y = pow(x, y); }
};

#endif