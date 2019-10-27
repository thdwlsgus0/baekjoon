#include <iostream>
using namespace std;

int main(void)
{
	int a, b,result1,result2,result3;
	cin >> a >> b;
	result1 = a * (b % 100 %10);
	result2 = a * (b % 100 / 10);
	result3 = a * (b / 100);
	cout << result1 << '\n' << result2 << '\n' << result3 << a * b << '\n';
	return 0;
}