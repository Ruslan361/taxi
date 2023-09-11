#pragma once
#include <string>
class Driver
{
public:
	std::string name;
	unsigned int experience;
	Driver(std::string name, unsigned int experience);
	Driver() :Driver("unknown", 0) {}
};

