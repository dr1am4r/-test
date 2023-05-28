#include <iostream>
using namespace std;
//If 5
int main() {
	setlocale(0, "");
	
	int a, b, c, i = 0, k = 0;
		cout << "Первое числo: ";
		cin >> a;
		cout << "Второе числo: ";
		cin >> b;
		cout << "Третье числo: ";
		cin >> c;

	if (a >= 0)
		i = i++;
	else
		k = k++;
	if (b >= 0)
		i = i++;
	else
		k = k++;
	if (c >= 0)
		i = i++;
	else
		k = k++;
		
		cout << "Количество положительных:" << i << endl << "Количество отрицательных:" << k;
	return 0;
}

//If 10
//int main() {
//	setlocale(0, "");
//
//	int a, b;
//	cout << "Введите число A: ";
//	cin >> a;
//	cout << "Введите число B: ";
//	cin >> b;
//
//	if (a != b) {
//		a = a + b;
//		b = a;
//	}
//	else {
//		a = 0;
//		b = 0;
//	}
//	
//	cout << "A = " << a << endl << "B = " << b;
//	return 0;
//}

//If 15  
//int main() {
//	setlocale(0, "");
//	
//	int a, b, c, max;
//	cout << "Введите 3 числа:\n";
//	cout << "A: ";
//	cin >> a;
//	cout << "B: ";
//	cin >> b;
//	cout << "C: ";
//	cin >> c;
//
//	if (a <= b && a <= c) {
//		cout << b + c;
//	}
//		else if (b <= a && b <= c) {
//			cout << a + c;
//		}
//			else {
//				cout << b + a;
//			}
//	}


//If 26
//int main() {
//	setlocale(0, "");
//
//	int x;
//	cout << "Введите x: ";
//	cin >> x;
//
//	if (x <= 0) {
//		x = x;
//	}
//		else if ((0 < x) && (x < 2)) {
//			x = x * x;
//		}
//			else if (x >= 2) {
//				x = 4;
//			}
//
//	cout << "x = " << x;
//}

//If
//int main() {
//	setlocale(0, "");
//
//	int x;
//	cout << "Введите число в диапазоне 1 - 999: ";
//	cin >> x;
//
//	if (x % 2 != 0) cout << "не ";
//		if (x > 99 ) cout << "четное трехзначное число";
//			else if (x > 9) cout << "четное двухзначное число";
//				else cout << "четное однозначное число";
//}