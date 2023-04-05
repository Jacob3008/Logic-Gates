#pragma once
#include "Gate.h"
#include <vector>
#include <string>
class Gate;

class Wire {
public:
	Wire(int, std::string, std::vector<Gate*>, int, std::string);
	void setValue(int);
	void setHistory(std::string);
	void setDrives(std::vector<Gate*>);
	int getValue() const;
	std::string getName() const;
	std::vector<Gate*> getDrives() const;
	int getIndex() const;
	std::string getHistory() const;
	void printHistory() const;

private:
	int value;
	std::string name;
	std::vector<Gate*> drives;
	int index;
	std::string history;
};