#include <iostream>
using namespace std;

//Integer 6
int main(){
	setlocale(0, "");
	int a, b, c;
	cout << "Введите двухзначное число:" << endl;
	cin >> a;

	b = a / 10;
	c = a % 10;
	
	cout << "Единицы: " << b << endl << "Десятки: " << c;
	return 0;
}

//Integer 15
//int main() {
//	setlocale(0, "");
//	int a, b, c, x, y;
//	cout << "Введите трехзначное число: ";
//	cin >> x;
//	
//	a = x / 100;
//	b = (x / 10) % 10;
//	c = x % 10;
//	y = b * 100 + a * 10 + c;
//	
//	cout << "Число после преобразования: " << y;
//	return 0;
//}

//Integer 18
//int main() {
//	setlocale(0, "");
//
//	int a, b;
//	cout << "число больше 999: ";
//	cin >> a;
//
//	b = a / 1000;
//	
//	cout << "тысячи: " << b;
//	return 0;
//}

//Integer 24
//int main() {
//	setlocale(0, "");
//	int n, m;
//	cout << "K: ";
//	cin >> n;
//	
//	m = n % 7;
//	
//	cout << "Номер дня недели: " << m;
//	return 0;
//}

//Integer 30
//int main() {
//	setlocale(0, "");
//
//	int year, b;
//	cout << "введите год: ";
//	cin >> year;
//	
//	b = (year / 100) + 1;
//	
//	cout << "столетие: " << b;
//
//}