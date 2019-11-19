#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int x[3];
	while (1)
	{
		cin >> x[0] >> x[1] >> x[2];
		sort(x, x + 3);
		if (x[0] == 0 && x[1] == 0 && x[2] == 0)break;
		if (x[0]*x[0] + x[1] * x[1] == x[2] * x[2])cout << "right" << '\n';
		else cout << "wrong" << '\n';
	}
	return 0;
}