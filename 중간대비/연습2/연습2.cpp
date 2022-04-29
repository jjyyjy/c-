#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	char name[100] = { };
	char max[100] = { };
	int i;

	cout << "5명의 이름을 ;으로 구분하여 입력하세요!" << endl;
	for (i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << "번째 >> " << name << endl;
		if (strlen(max) < strlen(name)) {
			strcpy_s(max, name);
		}
	}
	cout << "가장 긴 이름은 " << max << endl;
}