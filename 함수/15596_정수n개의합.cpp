#include <iostream>
using namespace std;

int sum(int n, int a[])
{
	int value = 0;
	for (int i = 0; i < n; i++)
	{
		value += a[i];
	}
	return value;
}