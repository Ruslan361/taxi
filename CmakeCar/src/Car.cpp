#include "Car.h"
#include <iostream>

Car::Car(const Driver& driver, const Engine& engine, std::string color, std::string mark, bool is_on_way)
{
	this->driver = driver;
	this->engine = engine;
	this->color = color;
	this->mark = mark;
	this->is_on_way = is_on_way;
}

void Car::check_status()
{
	if (is_on_way) {
		std::cout << "On way" << std::endl;
	}
	else {
		std::cout << "In autopark" << std::endl;
	}
}

void Car::send_on_the_way()
{
	is_on_way = true;
}

void Car::return_in_autopark()
{
	is_on_way = false;
}
