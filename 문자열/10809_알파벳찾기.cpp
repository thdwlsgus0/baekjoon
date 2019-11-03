#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(void)
{
	int alpha[26];
	string s;
	memset(alpha, -1, sizeof(int) * 26);
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (alpha[s[i] - 'a'] == -1)alpha[s[i] - 'a'] = i;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << alpha[i] << ' ';
	}
	return 0;
}