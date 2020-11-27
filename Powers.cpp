#include <iostream>

using namespace std;

double func(double a, double b, double n, double N) {
	if (2 * n < N) {
		return func(a, b * b, n * 2, N);
	}
	else {
		for (int i = 0; i < N-n; i++)
		{
			b *= a;
		}
		return b;
	}
}
int main()
{
	double a, b;
	cin >> a >> b;
	double res = 1;
// 1. Через обычные итерации.
	for (int i = 0; i < b; i++)
	{
		res *= a;
	}
	cout << res << endl;
// 2. Через степень двойки с домножением.
	res = func(a, a, 1, b);
	cout << res << endl;

}

