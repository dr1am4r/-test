#include <iostream>
using namespace std;

//Boolean 5
int main() {
	setlocale(0, "");
	
	int a, b;
		cout << "A: ";
		cin >> a;
		cout << "B: ";
		cin >> b;

	if (a >= 0 && b < -2) {
		cout << "Истинно";
	}
	else {
		cout << "Ложь";
	}
	return 0;
}

//Boolean 10
//int main(){
//	setlocale(0, "");
//	
// int a, b;
//		cout << "A: ";
//		cin >> a;
//		cout << "B: ";
//		cin >> b;
//
//	if (a % 2 == 0 && b % 2 == 0) {
//		cout << "Истинно";
//	}
//	else {
//		cout << "Лож";
//	}
//
//	return 0;
//}

//Boolean 20
//int main() {
//	setlocale(0, "");
//	
//	int a, b;
//		cout << "Введите трехзначное число: ";
//		cin >> a;
//
//	if ((a / 100) != (a % 100 / 10) && (a / 100) != (a % 10) && (a % 100 / 10) != (a % 10)) {
//		cout << "Истинно";
//	}
//	else
//	{
//		cout << "Ложь";
//	}
// 
// return 0;
//}

//Boolean 24
//int main() {
//	setlocale(0,"");
//
//	float a, b, c;
//	float D;
//		cout << "Введите A, B и С:" << endl;
//		cout << "A= ";
//		cin >> a;
//		cout << "B= ";
//		cin >> b;
//		cout << "C= ";
//		cin >> c;
//
//	D = (b * b) - (4 * a * c);
//
//	if (D >= 0) {
//		cout << "Истинно" << endl << "D = " << D;
//	}
//	else {
//		cout << "Ложь" << endl << "D = " << D;
//	}
// 
// return 0;
//}

//Boolean 35
//int main() {
//	setlocale(0, "");
//
//	int x1, y1, x2, y2;
//		cout << "Введите координаты двух полей (от 1 до 8):" << endl;
//		cout << "X1: ";
//		cin >> x1;
//		cout << "Y1: ";
//		cin >> y1;
//		cout << "X2: ";
//		cin >> x2;
//		cout << "Y2: ";
//		cin >> y2;
//
//	if ((x1 + y1) % 2 == (x2 + y2) % 2) {
//		cout << "Истинно";
//	}
//	else {
//		cout << "Ложь";
//	}
//
//	return 0;
//}