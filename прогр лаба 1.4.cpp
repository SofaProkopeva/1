#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, S, R, P, C;
	cin >> a >> b;
	S = a * a + b * b;
	R = a * a - b * b;
	P = a * a * b * b;
	C = (a * a) / (b * b);
	cout << "Сумма квадратов =" << S << endl;
	cout << "Разность квадратов =" << R << endl;
	cout << "Произведние квадратов=" << P << endl;
	cout << "Частное квадратов =" << C << endl;
	return 0;
}
