#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> vec;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int data;
		cin >> data;
		vec.push_back(data);
	}
	sort(vec.begin(), vec.end());
	cout << vec[0] <<' '<< vec[vec.size() - 1];
	return 0;
}