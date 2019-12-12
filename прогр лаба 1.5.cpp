#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, S, R, P, C;
	cin >> a >> b;
	S = abs(a) + abs(b);
	R = abs(a) - abs(b);
	P = abs(a) * abs(b);
	C = abs(a) / abs(b);
	cout << "Сумма модулей =" << S << endl;
	cout << "Разность модулей =" << R << endl;
	cout << "Произведение модулей =" << P << endl;
	cout << "Частное модулей =" << C << endl;
	return 0;
}
