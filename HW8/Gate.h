#pragma once
#include "Wire.h"
#include <string>
class Wire;

class Gate {
public:
	Gate(std::string, int, Wire*, Wire*, Wire*);
	int getDelay() const;
	Wire* getInput(int) const;
	Wire* getOutput() const;
	int evaluate(std::string) const;
	
private:
	std::string type;
	int delay;
	Wire* in1;
	Wire* in2;
	Wire* out;
};