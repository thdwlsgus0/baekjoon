#include <iostream>
#define SIZE 1000001
using namespace std;
int arr[SIZE] = { 0, };
int main(void)
{
	int n, m;
	cin >> n >> m;
	for (int i = 2; i <= m; i++)
	{
		for (int j = i + i; j <= m; j += i)
		{
			if (arr[j] == 0)arr[j] = 1;
		}
	}
	for (int i = n; i <= m; i++)
	{
		if (arr[i] == 0 && i!=1)cout << i << '\n';
	}
	return 0;
}