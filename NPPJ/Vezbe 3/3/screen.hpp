#ifndef SCREEN_HPP_INCLUDED
#define SCREEN_HPP_INCLUDED

enum ScreenState
{
	ssON,
	ssOFF
};

class Screen
{
private:
	ScreenState state;
	int brightness;

public:
	Screen() : state(ssOFF), brightness(0) {}
	
	ScreenState getState() const { return state; }
	int getBrightness() const { return brightness; }

	void setState(ScreenState state) { this->state = state; }

	bool incB()
	{
		if (state == ssON && brightness < 20)
		{
			brightness += 2;
			return true;
		}
		return false;
	}

	bool decB()
	{
		if (state == ssON && brightness > 0)
		{
			brightness -= 2;
			return true;
		}
		return false;
	}
};

#endif