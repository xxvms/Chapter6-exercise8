#include "serialNo.h"
#include <iostream>


serialNo::serialNo()
{
	static int counter = 1;
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
