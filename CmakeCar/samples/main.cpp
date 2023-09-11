#include <iostream>
#include "Car.h"
#include "Lorry.h"
#include "SportCar.h"
int main() {
	Car car = Car(Driver("Vasya", 25), Engine(200, 2010), "red", "toyota");
	Lorry lorry = Lorry(Driver("Vasya", 25), Engine(200, 2010), "red", "toyota", 1050);
	SportCar sport_car = SportCar(Driver("Vasya", 25), Engine(200, 2010), "red", "toyota", 255);
	car.check_status();
	car.send_on_the_way();
	car.check_status();
	car.return_in_autopark();
	car.check_status();
	lorry.check_status();
	lorry.send_on_the_way();
	lorry.check_status();
	lorry.return_in_autopark();
	lorry.check_status();
	sport_car.check_status();
	sport_car.send_on_the_way();
	sport_car.check_status();
	sport_car.return_in_autopark();
	sport_car.check_status();
}