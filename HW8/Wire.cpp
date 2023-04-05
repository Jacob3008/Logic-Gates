#include "Wire.h"
#include <iostream>

Wire::Wire(int v = 0, std::string n = "", std::vector<Gate*> d = {}, int i = 0, std::string h = "")
{
	value = v;
	name = n;
	drives = d;
	index = i;
	history = h;
}

void Wire::setValue(int v)
{
	value = v;
}

void Wire::setHistory(std::string h)
{
    history = h;
}

void Wire::setDrives(std::vector<Gate*> d){
    drives = d;
}

int Wire::getValue() const
{
	return value;
}

std::string Wire::getName() const
{
	return name;
}

std::vector<Gate*> Wire::getDrives() const
{
	return drives;
}

int Wire::getIndex() const
{
	return index;
}

std::string Wire::getHistory() const
{
	return history;
}

void Wire::printHistory() const
{
	std::cout << "History: " << history << "\n";
}