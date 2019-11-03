#include <iostream>
#include <string>
using namespace std;

int main(void)
{ 
	string s;
	int cnt = 0;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (i == 0 && s[i] == ' ')continue;
	    if (s[i] == ' ')cnt++;
		if (i == s.length() - 1 && s[i]!=' ')cnt++;
	}
	cout << cnt;
	return 0;
}