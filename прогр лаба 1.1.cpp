#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, s, p;
	cin >> a;
	cin >> b;
	s = a * b;
	p = 2 * (a + b);
	cout << "Площадь S =" << s << endl;
	cout << "Периметр P =" << p << endl;
	return 0;
}

