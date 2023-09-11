#pragma once
class Engine
{
public:
	unsigned int power;
	unsigned int year_of_creating;
	Engine(unsigned int power, unsigned int year_of_creating);
	Engine() :Engine(0, 0) {}
};

