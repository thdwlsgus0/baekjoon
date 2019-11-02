#include <iostream>
using namespace std;
int arr[10001];
int num(int x)
{
	int res = x;
	if (x >= 10000) { res += x / 10000; x %= 10000; }
	if (x >= 1000) { res += x / 1000; x %= 1000; }
	if (x >= 100) { res += x / 100; x %= 100; }
	if (x >= 10) { res += x / 10; x %= 10; }
	return res += x;
}
int main(void)
{
	for (int i = 1; i <= 10000; i++) {
		arr[num(i)] = 1;
		if (!arr[i])cout << i << '\n';
	}

	return 0;
}