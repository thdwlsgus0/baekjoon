#include <iostream>
using namespace std;

int main(void)
{
	int n,data,cnt=0;
	int arr[1001] = { 0, };
	for (int i = 2; i <= 1000; i++)
	{
		for (int j = i + i; j <= 1000; j += i)
		{
			if (arr[j] == 0)arr[j] = 1;
		}
	}
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> data;
		if (data != 1 && arr[data] == 0)cnt++;
	}
	cout << cnt;
	return 0;
}