#include "Gate.h"

Gate::Gate(std::string t, int d, Wire* i1, Wire* i2, Wire* o)
{
	type = t;
	delay = d;
	in1 = i1;
	in2 = i2;
	out = o;
}

int Gate::getDelay() const
{
	return delay;
}

Wire* Gate::getInput(int i) const
{
	if (int i = 0)
	{
		return in1;
		
	}
	else if (int i = 1)
	{
		return in2;
	}
}

Wire* Gate::getOutput() const
{
	return out;
}

int Gate::evaluate(std::string gate) const
{
	if (gate == "AND")
	{
		if (in1->getValue() == 1 && in2->getValue() == 1)
		{
			return 1;
		}
		else if (in1->getValue() == 0 || in2->getValue() == 0)
		{
			return 0;
		}
		else
		{
			return NULL;
		}
	}

	if (gate == "OR")
	{
		if (in1->getValue() == NULL || in2->getValue() == NULL)
		{
			return NULL;
		}
		else if (in1->getValue() == 1 || in2->getValue() == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	if (gate == "NAND")
	{
		if (in1->getValue() == 0 || in2->getValue() == 0)
		{
			return 1;
		}
		else if (in1->getValue() == 1 && in2->getValue() == 1)
		{
			return 0;
		}
		else
		{
			return NULL;
		}
	}

	if (gate == "NOR")
	{
		if (in1->getValue() == NULL || in2->getValue() == NULL)
		{
			return NULL;
		}
		else if (in1->getValue() == 0 && in2->getValue() == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	if (gate == "XOR")
	{
		if (in1->getValue() == NULL || in2->getValue() == NULL)
		{
			return NULL;
		}
		else if (in1->getValue() != in2->getValue())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	if (gate == "XNOR")
	{
		if (in1->getValue() == NULL || in2->getValue() == NULL)
		{
			return NULL;
		}
		else if (in1->getValue() == in2->getValue())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	if (gate == "NOT")
	{
		if (in1->getValue() == 0)
		{
			return 1;
		}
		else if (in1->getValue() == 1)
		{
			return 0;
		}
		else
		{
			return NULL;
		}
	}
}