#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num,arr[1001],total=0,avg=0,cnt=0; 
		cin >> num;
		for (int j = 0; j < num; j++)
		{
			cin >> arr[j];
			total += arr[j];
		}
		avg = total / num;
		for (int j = 0; j < num; j++)
		{
			if (arr[j] > avg)cnt++;
		}
		printf("%.3f%%\n", (double)cnt / num*100, '%');
	}
	return 0;
}