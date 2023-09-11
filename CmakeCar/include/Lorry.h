#pragma once
#include "Car.h"
class Lorry : public Car
{
public:
	unsigned int lifting;
	Lorry(const Driver& driver, const Engine& engine, std::string color, std::string mark, unsigned int lifting, bool is_on_way = false);
};

