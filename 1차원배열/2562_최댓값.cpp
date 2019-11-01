#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> vec;
	int maxindex = 0, maxvalue = -1;
	for (int i = 0; i < 9; i++)
	{
		int data;
		cin >> data;
		vec.push_back(data);
	}
	for (int i = 0; i < 9; i++)
	{
		if (maxvalue < vec[i])
		{
			maxvalue = vec[i];
			maxindex = i + 1;
		}
	}
	cout << maxvalue << '\n' << maxindex;
	return 0;
}