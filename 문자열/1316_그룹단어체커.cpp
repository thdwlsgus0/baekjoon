#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n,cnt=0;
	bool check[26];
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < 26; i++)check[i] = false;
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			if (check[s[j] - 'a'] == false)check[s[j] - 'a'] = true;
			else if(check[s[j]-'a'] == true && s[j-1] != s[j])break;
			if (j == s.length() - 1)cnt++;
		}
	}
	cout << cnt;
	return 0;
}