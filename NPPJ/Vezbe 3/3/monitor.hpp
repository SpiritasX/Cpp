#ifndef MONITOR_HPP_INCLUDED
#define MONITOR_HPP_INCLUDED

#include "screen.hpp"

enum MonitorStates
{
	sON,
	sOFF,
	sOUT,
	sTEST,
	sSTANDBY
};

class Monitor
{
private:
	MonitorStates state;
	Screen screen;

public:
	Monitor() : state(sOFF) {}

	MonitorStates getMonitorState() const { return state; }
	ScreenState getScreenState() const { return screen.getState(); }
	int getBrightness() const { return screen.getBrightness(); }

	bool turnOn()
	{
		switch (state)
		{
		case sTEST:
		case sOFF:
		case sSTANDBY:
			state = sON;
			screen.setState(ssON);
			return true;
		case sON:
		case sOUT:
			return false;
		}
	}

	bool turnOff()
	{
		switch (state)
		{
		case sTEST:
		case sON:
		case sSTANDBY:
			state = sOFF;
			screen.setState(ssOFF);
			return true;
		case sOFF:
		case sOUT:
			return false;
		}
	}

	bool turnOut()
	{
		switch (state)
		{
		case sTEST:
		case sOFF:
		case sSTANDBY:
		case sON:
			state = sOUT;
			screen.setState(ssOFF);
			return true;
		case sOUT:
			return false;
		}
	}

	bool turnTest()
	{
		switch (state)
		{
		case sON:
			state = sTEST;
			screen.setState(ssON);
			return true;
		case sTEST:
		case sOFF:
		case sSTANDBY:
		case sOUT:
			return false;
		}
	}

	bool turnStandBy()
	{
		switch (state)
		{
		case sON:
			state = sSTANDBY;
			screen.setState(ssOFF);
			return true;
		case sTEST:
		case sOFF:
		case sSTANDBY:
		case sOUT:
			return false;
		}
	}

	bool repair()
	{
		switch (state)
		{
		case sOUT:
			state = sOFF;
			screen.setState(ssOFF);
			return true;
		case sTEST:
		case sOFF:
		case sSTANDBY:
		case sON:
			return false;
		}
	}

	bool incB()
	{
		if (state == sON || state == sTEST)
			return screen.incB();
		return false;
	}
	bool decB()
	{
		if (state == sON || state == sTEST)
			return screen.decB();
		return false;
	}
};

#endif