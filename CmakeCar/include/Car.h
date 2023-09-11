#pragma once
#include "Driver.h"
#include "Engine.h"
class Car
{
public:
	Driver driver;
	Engine engine;
	std::string color;
	std::string mark;
	Car(const Driver& driver, const Engine& engine, std::string color, std::string mark, bool is_on_way = false);
	void check_status();
	void send_on_the_way();
	void return_in_autopark();
protected:
	bool is_on_way;
};

