#include <iostream>
#include <string>
using namespace std;

int main()
{
	char name[20], land[100];
	int age;

	cout << "이름은? ";
	cin.getline(name, 20);
	cout << "주소는? ";
	cin.getline(land, 100);
	cout << "나이는? ";
	cin >> age;

	cout << name << ", " << land << ", " << age;
}