#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string ox;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int total = 0;
		int cul = 0;
		cin >> ox;
		for (int j = 0; j < ox.length(); j++)
		{
			if (ox[j] == 'O')
			{
				cul++;
				total += cul;
			}
			else if (ox[j] == 'X')
			{
				cul = 0;
			}
		}
		cout << total << '\n';
	}
	return 0;
}