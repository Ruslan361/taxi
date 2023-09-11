#pragma once
#include "Car.h"
class SportCar : public Car
{
public:
	unsigned int max_speed;
	SportCar(const Driver& driver, const Engine& engine, std::string color, std::string mark, unsigned int max_speed, bool is_on_way = false);
};

