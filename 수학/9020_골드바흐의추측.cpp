#include <iostream>
#define SIZE 10001
using namespace std;
int arr[SIZE];
int main(void)
{
	int n;
	cin >> n;
	for (int i = 2; i <= 10001; i++)
	{
		for (int j = i + i; j <= 10001; j += i)
		{
			if (arr[j] == 0)arr[j] = 1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		int data, first, second;
		cin >> data;
		for (int j = data - 2; j >= 2; j--)
		{
			if (arr[j] == 0 && arr[data - j] == 0 && j >= data - j)
			{
				first = data-j;
				second = j;
			}
		}
		cout << first << ' ' << second << '\n';
	}
	return 0;
}