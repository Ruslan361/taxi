#include "Lorry.h"

Lorry::Lorry(const Driver& driver, const Engine& engine, std::string color, std::string mark, unsigned int lifting, bool is_on_way) : Car(driver, engine, color, mark, is_on_way)
{
	this->lifting = lifting;
}
