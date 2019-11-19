#include <iostream>
using namespace std;
int min(int a, int b)
{
	return a > b ? b : a;
}
int main(void)
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	cout << min(x, min(w - x, min(y, h - y)));
	return 0;
}