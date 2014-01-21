#include "Dollar.h"

namespace Money
{

Dollar::Dollar()
{
}

Dollar::Dollar(int amount)
{
	_amount = amount;
}

Dollar::~Dollar()
{
}

int Dollar::amount()
{
	return _amount;
}

Dollar Dollar::times(int multiplier)
{
	return Dollar(_amount * multiplier);
}

}
