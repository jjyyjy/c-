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

	cout << "�̸��� ��ȭ��ȣ �Է� : \n";
	string name, tel;
	int i;

	for (i = 0; i < 3; i++) {
		cout << "���" << i + 1 << ">>";
		cin >> name >> tel;
		person[i].set(name, tel);
	}
	cout << "��� ����� �̸� : ";
	for (i = 0; i < 3; i++) {
		cout << person[i].getName() << ' ';
	}
	cout << "\n\n";
	cout << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ��� : ";
	cin >> name;
	for (i = 0; i < 3; i++) {
		if (person[i].getName() == name) {
			cout << "��ȣ : " << person[i].getTel() << "\n";
		}
	}
	return 0;
}