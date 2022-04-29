#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	string uname;
	int num;
	int coin;
public:
	Account() {
		uname = "";
		num = 0;
		coin = 0;
	}
	Account(string uname, int num, int coin) {
		this->uname=uname;
		this->num=num;
		this->coin=coin;
	}
	string getOwner() {
		return uname;
	};
	void deposit(int m) {
		coin += m;
	};
	int Widthraw(int n) {
		coin -= n;
		return coin;
	};
	int inquiry() {
		return coin;
	};
};

int main()
{
	Account bank("kitea", 1, 5000);
	bank.deposit(50000);
	cout << bank.getOwner() << "�� �ܾ���" << bank.inquiry() << "�Դϴ�." << endl;
	int money = bank.Widthraw(20000);
	cout << bank.getOwner() << "�� �ܾ���" << bank.inquiry() << "�Դϴ�." << endl;
}