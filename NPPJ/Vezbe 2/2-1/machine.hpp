#ifndef MACHINE_HPP_INCLUDED
#define MACHINE_HPP_INCLUDED

enum MachineState
{
	sA,
	sB,
	sC,
	sD
};

class Machine
{
private:
	MachineState currentState;
	int value;

public:
	Machine()
	{
		currentState = sC;
		value = 80;
	}

	MachineState getCurrentState() const { return currentState; }
	int getValue() const { return value; }

	bool metodaX()
	{
		switch (currentState)
		{
		case sB:
		case sC:
			currentState = sA;
			return true;
		case sA:
		case sD:
			return false;
		}
	}

	bool metodaY()
	{
		switch (currentState)
		{
		case sB:
		case sD:
			currentState = sC;
			value = 80;
			return true;
		case sA:
		case sC:
			return false;
		}
	}

	bool metodaZ()
	{
		switch (currentState)
		{
		case sA:
			currentState = sB;
			value = 0;
			return true;
		case sB:
		case sC:
		case sD:
			return false;
		}
	}

	bool metodaW()
	{
		switch (currentState)
		{
		case sA:
			currentState = sD;
			value = 0;
			return true;
		case sB:
		case sC:
		case sD:
			return false;
		}
	}

	bool plus()
	{
		value += 20;

		if (value > 80 || currentState != sA)
		{
			value -= 20;
			return false;
		}

		return true;
	}

	bool minus()
	{
		value -= 20;

		if (value < 0 || currentState != sA)
		{
			value += 20;
			return false;
		}

		return true;
	}
};

#endif
