#include <iostream>
#include "XnaY.hpp"

using namespace std;

int main()
{
	XnaY xnay1;
	XnaY xnay2(2, 4);
	XnaY xnay3(xnay1);

	cout << xnay1.getX() << " " << xnay1.getY() << " " << xnay1.getXnaY() << endl;
	xnay1.setX(5);
	cout << xnay1.getX() << " " << xnay1.getY() << " " << xnay1.getXnaY() << endl;
	xnay1.setY(2);
	cout << xnay1.getX() << " " << xnay1.getY() << " " << xnay1.getXnaY() << endl;
	xnay1.setX_Y(6, 7);
	cout << xnay1.getX() << " " << xnay1.getY() << " " << xnay1.getXnaY() << endl;

	cout << xnay2.getX() << " " << xnay2.getY() << " " << xnay2.getXnaY() << endl;

	cout << xnay3.getX() << " " << xnay3.getY() << " " << xnay3.getXnaY() << endl;

	return 0;
}