#include <iostream>
#include <string>
using namespace std;

class CoffeeMachine {
private:
	int cof, wat, sug;
public:
	CoffeeMachine(int m, int n, int s);
	void show();
	void fill();
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
};

CoffeeMachine::CoffeeMachine(int m, int n, int s) {
	cof = m;
	wat = n;
	sug = s;
}

void CoffeeMachine::show() {
	cout << "커피머신상태, 커피 : " << cof << " 물 : " << wat << " 설탕 : " << sug << endl;
}
void CoffeeMachine::fill() {
	cof = 10;
	wat = 10;
	sug = 10;
}
void CoffeeMachine::drinkEspresso() {
	cof--;
	wat--;
}
void CoffeeMachine::drinkAmericano() {
	cof--;
	wat-=2;
}
void CoffeeMachine::drinkSugarCoffee() {
	cof--;
	wat-=2;
	sug--;
}

int main()
{
	CoffeeMachine java(5, 10, 6);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}