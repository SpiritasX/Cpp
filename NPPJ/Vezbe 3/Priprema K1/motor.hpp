#ifndef MOTOR_HPP_INCLUDED
#define MOTOR_HPP_INCLUDED

class Motor
{
private:
	int brzina;

public:
	Motor() : brzina(0) {}

	int getBrzina() const { return brzina; }

	void setBrzina(int brzina) { this->brzina = brzina; }
};

#endif