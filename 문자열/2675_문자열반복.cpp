#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n,data;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> data >> s;
		for (int j = 0; j < s.length(); j++)
		{
			for (int k = 0; k < data; k++)
			{
				cout << s[j];
			}
		}
		cout << '\n';
	}
	return 0;
}