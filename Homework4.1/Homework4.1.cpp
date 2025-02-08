#include <iostream>

using namespace std;

int Recursive(int a, int b);
int Iterative(int a, int b);

int main()
{
    setlocale(LC_ALL, "RU");
    int num1, num2;
    cout << "Введите первое число: " << endl;
    cin >> num1;
    cout << "Введите второе число: " << endl;
    cin >> num2;
    int res1 = Recursive(num1, num2);
    int res2 = Iterative(num1, num2);
    cout << "НОД (рекурсивный): " << res1 << endl;
    cout << "НОД (итерационный): " << res2 << endl;
    return 0;
}

int Recursive(int a, int b) {
    return (b == 0) ? a : Recursive(b, a % b);
}

int Iterative(int c, int d) {
    while (d != 0) {
        int temp = d;
        d = c % d;
        c = temp;
    }
    return c;
}