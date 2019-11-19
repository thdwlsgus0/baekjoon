#include <iostream>
using namespace std;

int main(void)
{
	int n,dist1,dist2;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		dist1 = x2 - x1;
		dist2 = y2 - y1;
		if (r1 > r2)swap(r1, r2);
		int add = r1 + r2;
		add = add * add;
		int sub = r2 - r1;
		sub = sub * sub;
		int d = dist1 * dist1 + dist2 * dist2;
		if (d<add && d>sub)cout << 2;
		else if (d == add || (d == sub && d != 0))cout << 1;
		else if (d<sub || d>add) {
			cout << 0;
		}
		else if (d == 0) {
			if (r1 == r2)cout << -1;
			else cout << 0;
		}
		cout << '\n';
	}
	return 0;
}