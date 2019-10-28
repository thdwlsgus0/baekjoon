#include <iostream>
using namespace std;

int main(void)
{
	int n, x;
	cin >> n >> x;
	for (int i = 1; i <= n; i++)
	{
		int k;
		cin >> k;
		if (k < x)cout << k << ' ';
	}
	return 0;
}