#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int a, b, c,result;
	vector<int> vec(10);
	cin >> a >> b >> c;
	result = a * b * c;
	while (result != 0)
	{
		vec[result % 10]++;
		result /= 10;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << vec[i] << '\n';
	}
	return 0;
}