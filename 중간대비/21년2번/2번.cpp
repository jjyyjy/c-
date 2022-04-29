#include <iostream>
using namespace std;

class Sample {
	int *p;
	int size;
public:
	Sample(int n) {
		size = n;
		p = new int[size];
	}
	void read() {
		for (int i = 0; i < size; i++) {
			cin >> p[i];
		}
	};
	void write() {
		for (int i = 0; i < size; i++) {
			cout << i + 1 << "번째:" << p[i] << endl;
		}
	};
	int biggerOne() {
		int max = 0;
		for (int i = 0; i < size; i++) {
			if (max < p[i]) {
				max = p[i];
			}
		}
		return max;
	};
	~Sample() {
		delete p;
	};
};

int main()
{
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 정수는 " << s.biggerOne() << endl;
}