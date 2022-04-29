#include <iostream>
#include <string>
using namespace std;

class Calender {
private:
	int year;
public:
	Calender();
	int getYear();
};

Calender::Calender() {
	year = 10;
}

int Calender::getYear() {
	return year;
}

int main()
{
	Calender dal;
	cout << "³â¼ö´Â : ";
	cout << dal.getYear();
}