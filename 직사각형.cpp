#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int x[3], y[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> x[i] >> y[i];
	}
	sort(x, x + 3);
	sort(y, y + 3);
	for (int i = 0; i < 2; i++)
	{
		if (x[i] != x[i + 1] && i == 0)cout << x[i]<<' ';
		else if (x[i] != x[i + 1] && i == 1)cout << x[i+1]<<' ';
	}
	for (int i = 0; i < 2; i++)
	{
		if (y[i] != y[i + 1] && i == 0)cout << y[i];
		else if (y[i] != y[i + 1] && i == 1)cout << y[i+1];
	}
	return 0;
}