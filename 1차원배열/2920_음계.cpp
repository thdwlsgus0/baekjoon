#include <iostream>
#include <vector>
#define ascending 1
#define descending 2
#define mixed 3
using namespace std;

int main(void)
{
	vector<int> vec;
	int check = 0;
	for (int i = 0; i < 8; i++)
	{
		int data;
		cin >> data;
		vec.push_back(data);
	}
	if (vec[0] < vec[1])check = ascending;
	else if (vec[0] > vec[1])check = descending;
	for (int i = 1; i < 7; i++)
	{
		if (vec[i] > vec[i + 1] && check == ascending)check = mixed;
		else if (vec[i] < vec[i + 1] && check == descending)check = mixed;
	}
	if (check == ascending)cout << "ascending";
	else if (check == descending)cout << "descending";
	else if (check == mixed)cout << "mixed";
	return 0;
}