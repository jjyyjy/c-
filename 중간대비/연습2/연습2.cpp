#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	char name[100] = { };
	char max[100] = { };
	int i;

	cout << "5���� �̸��� ;���� �����Ͽ� �Է��ϼ���!" << endl;
	for (i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << "��° >> " << name << endl;
		if (strlen(max) < strlen(name)) {
			strcpy_s(max, name);
		}
	}
	cout << "���� �� �̸��� " << max << endl;
}