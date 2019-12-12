#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, x;
	cin >> a >> b;
	x = (a + b) / 2;
	cout << "Среднее арифметическое =" << x << endl;
	return 0;
}
