#include <iostream>
#include <string>
using namespace std;

int main()
{
	char name[20], land[100];
	int age;

	cout << "�̸���? ";
	cin.getline(name, 20);
	cout << "�ּҴ�? ";
	cin.getline(land, 100);
	cout << "���̴�? ";
	cin >> age;

	cout << name << ", " << land << ", " << age;
}