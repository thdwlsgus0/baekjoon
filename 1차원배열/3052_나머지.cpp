#include <iostream>
using namespace std;
int arr[1001] = { 0, };
int main(void)
{
	int data,cnt=0;
	for (int i = 0; i < 10; i++)
	{
		cin >> data;
		arr[data%42]++;
	}
	for (int i = 0; i <= 1000; i++)
	{
		if (arr[i] != 0)cnt++;
	}
	cout << cnt;
	return 0;
}