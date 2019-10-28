#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		cout << "Case #" << i + 1 << ": " << x + y << '\n';
	}
	return 0;
}