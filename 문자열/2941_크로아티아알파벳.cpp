#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	int cnt = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-'))
		{
			i++;
			cnt++;
		}
		else if (s[i] == 'd' && (s[i + 1] == 'z' && s[i + 2] == '='))
		{
			i += 2;
			cnt++;
		}
		else if (s[i] == 'd' && s[i + 1] == '-')
		{
			i++;
			cnt++;
		}
		else if(s[i]=='l' && s[i+1]=='j')
		{
			i++;
			cnt++;
		}
		else if (s[i] == 'n' && s[i + 1] == 'j')
		{
			i++;
			cnt++;
		}
		else if (s[i] == 's'&& s[i + 1] == '=')
		{
			i++;
			cnt++;
		}
		else if (s[i] == 'z' && s[i + 1] == '=')
		{
			i++;
			cnt++;
		}
		else cnt++;
	}
	cout << cnt;
	return 0;
}