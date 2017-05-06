#pragma once
class serialNo
{
private:
	int serialNumber;
	static int counter;

public:
	serialNo();
	~serialNo();
	int getSerial()
	{
		return serialNumber;
	}
	static int getCounter()
	{
		return counter;
	}
	void product();
};

