#include "serialNo.h"
#include <iostream>

int serialNo::counter = 1;

serialNo::serialNo()
{
	serialNumber = counter;
	counter++;

}
void serialNo::product()
{
	std::cout << "I am product number: ";
	std::cout << serialNumber << std::endl;
	serialNo::serialNo();
}


serialNo::~serialNo()
{
}
