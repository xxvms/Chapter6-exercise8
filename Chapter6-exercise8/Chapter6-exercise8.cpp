// Chapter6-exercise8.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "serialNo.h"


int main()
{
	serialNo objectSer[10];


	for (int i = 0; i < 10; i++)
	{
		objectSer[i].product();
		std::cout << std::endl;
	}


	system("pause");
    return 0;
}

