#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a, b, result;
    cout << "¬ведите число: ";
    cin >> a;
    cout << "¬ведите степень: ";
    cin >> b;

    __asm
    {
        mov eax, a
        mov ebx, b
        dec ebx
        L1 :
        mul a
            dec ebx
            jnz L1

            mov result, eax
    }

    cout << a << "^" << b << " = " << result << endl;

    system("pause");
}