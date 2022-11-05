#include <iostream>
#include "monitor.hpp"

using namespace std;

void printInfo(const Monitor& monitor)
{
	cout << "Monitor:\n";
	cout << "\tState = ";
	switch (monitor.getMonitorState())
	{
	case sON:
		cout << "ON\n";
		break;
	case sOFF:
		cout << "OFF\n";
		break;
	case sTEST:
		cout << "TEST\n";
		break;
	case sOUT:
		cout << "OUT\n";
		break;
	case sSTANDBY:
		cout << "STANDBY\n";
		break;
	}
	cout << "\tScreen:\n";
	cout << "\t\tState = ";
	if (monitor.getScreenState() == ssON)
		cout << "ON\n";
	else
		cout << "OFF\n";
	cout << "\t\tBrightness = " << monitor.getBrightness() << endl;
}

int main()
{
	Screen screen;
	Monitor monitor;

	cout << screen.getBrightness() << " " << screen.getState() << endl;
	if (!screen.incB())
		cout << "Ne moze da se poveca brightness.\n";
	screen.setState(ssON);
	screen.incB();
	screen.incB();
	screen.incB();
	screen.decB();
	screen.incB();
	cout << screen.getBrightness() << " " << screen.getState() << endl;

	cout << monitor.getBrightness() << " " << monitor.getScreenState() << " " << monitor.getMonitorState() << endl;
	if (!monitor.incB())
		cout << "Nije moguce povecati brightness.\n";
	if (!monitor.turnOn())
		cout << "Nije moguce upaliti monitor.\n";
	if (!monitor.repair())
		cout << "Nije moguce popraviti monitor.\n";
	if (!monitor.decB())
		cout << "Nije moguce smanjiti brightness.\n";
	monitor.incB();
	monitor.incB();
	monitor.incB();
	monitor.incB();
	printInfo(monitor);
	cout << monitor.getBrightness() << " " << monitor.getScreenState() << " " << monitor.getMonitorState() << endl;
	if (!monitor.turnOff())
		cout << "Nije moguce ugasiti monitor.\n";
	if (!monitor.turnStandBy())
		cout << "Nije moguce staviti monitor u standby.\n";
	if (!monitor.turnTest())
		cout << "Nije moguce upaliti test mod.\n";
	if (!monitor.turnOut())
		cout << "Nije moguce pokvariti monitor??\n";
	cout << monitor.getBrightness() << " " << monitor.getScreenState() << " " << monitor.getMonitorState() << endl;

	printInfo(monitor);

	return 0;
}