#include "SportCar.h"

SportCar::SportCar(const Driver& driver, const Engine& engine, std::string color, std::string mark, unsigned int max_speed, bool is_on_way) : Car(driver, engine, color, mark, is_on_way)
{
	this->max_speed = max_speed;
}
