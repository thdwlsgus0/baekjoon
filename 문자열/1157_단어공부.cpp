#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int maxvalue = 0, maxindex = 0;
	int count[26] = { 0, };
	bool check = false;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')count[s[i] - 'A']++;
		else if (s[i] >= 'a' && s[i] <= 'z')count[s[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (maxvalue < count[i])
		{
			maxindex = i;
			maxvalue = count[i];
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (maxvalue == count[i] && maxindex!=i)check = true;
	}
	if (check)cout << "?";
	else cout << char('A' + maxindex);
	return 0;
}