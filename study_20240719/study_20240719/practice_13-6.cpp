#include <iostream>
using namespace std;

class MP3
{
public:
	void play();
	void stop();
};

class MobilePhone
{
public:
	bool sendCall();
	bool receiveCall();
	bool sendSMS();
	bool receiveSMS();
};

class SmartPhone : public MobilePhone, public MP3
{
public:
	void dial();
};

void SmartPhone::dial()
{
	play();
	sendCall();
}

int main()
{
	SmartPhone handPhone;
	handPhone.play();
	handPhone.sendSMS();
}