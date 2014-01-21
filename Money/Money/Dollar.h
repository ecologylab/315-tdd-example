#pragma once

namespace Money
{

class Dollar
{
public:
	Dollar();
	Dollar(int amount);

	~Dollar();

	int amount();

	Dollar times(int multiplier);

private:
	int _amount;
};

}
