#include <iostream>
#include <string>
using namespace std;

int main()
{
	string con;
	int n, i=0;

	cout << "���ڿ� �Է� >>";
	getline(cin, con, '.');

	for (n = 0; n < con.size(); n++) {
		con.at('a');
		if (con.find('a')) {
			i++;
		}
	}
	cout << "���� a�� " << i << "�� �ֽ��ϴ�." << endl;
}