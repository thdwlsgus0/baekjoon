#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int x, y;
		cin >> x >> y;
		cout << "Case #" << i << ": " << x << " + " << y << " = " << x + y << '\n';
	}
	return 0;
}