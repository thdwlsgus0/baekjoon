#include <iostream>
#define SIZE 260001
using namespace std;
int arr[SIZE];
int main(void)
{
	int n;
	for (int i = 2; i <= SIZE; i++)
	{
		for (int j = i + i; j <= SIZE; j += i)
		{
			if (arr[j] == 0)arr[j] = 1;
		}
	}
	while (1)
	{
		cin >> n;
		int cnt = 0;
		if (n == 0)break;
		for (int j = n+1; j <= 2 * n; j++)
		{
			if (arr[j] == 0 && j != 1)cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}