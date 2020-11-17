#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(0, "");
	float n,b,i;
	i = 0; b = 0;
	cout << "Введите температуру в Цельсиях\n";
	cin >> n;
	if (n >= 0) {
		for (i = 0; i <= n; i++)
		{
			b = 9 * i / 5 + 32;
			cout << i <<setw(10)<<b<<endl;
		}
	}
	else cout << "Число должно быть неотрицательное\n";
	system("pause");
	return 0;
}
