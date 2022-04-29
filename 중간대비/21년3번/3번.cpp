#include <iostream>
using namespace std;

class Person {
private:
	string name;
	string tel;
public:
	Person() {
		name = "";
		tel = "";
	};
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) {
		this->name = name;
		this->tel = tel;
	};
};


int main()
{
	Person person[3];

	cout << "이름과 전화번호 입력 : \n";
	string name, tel;
	int i;

	for (i = 0; i < 3; i++) {
		cout << "사람" << i + 1 << ">>";
		cin >> name >> tel;
		person[i].set(name, tel);
	}
	cout << "모든 사람의 이름 : ";
	for (i = 0; i < 3; i++) {
		cout << person[i].getName() << ' ';
	}
	cout << "\n\n";
	cout << "전화번호를 검색합니다. 이름을 입력하세요 : ";
	cin >> name;
	for (i = 0; i < 3; i++) {
		if (person[i].getName() == name) {
			cout << "번호 : " << person[i].getTel() << "\n";
		}
	}
	return 0;
}