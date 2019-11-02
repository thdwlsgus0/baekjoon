#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int arr[1001],n,maxvalue = -1;
	double sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (maxvalue < arr[i])maxvalue = arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum += (arr[i] * 100)/(double)maxvalue;
	}
	printf("%.2f", sum/n);
	return 0;
}