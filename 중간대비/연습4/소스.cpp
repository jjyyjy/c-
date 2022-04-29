#include <iostream>
#include <string>
using namespace std;

int main()
{
	string con;
	int n, i=0;

	cout << "문자열 입력 >>";
	getline(cin, con, '.');

	for (n = 0; n < con.size(); n++) {
		con.at('a');
		if (con.find('a')) {
			i++;
		}
	}
	cout << "문자 a는 " << i << "개 있습니다." << endl;
}