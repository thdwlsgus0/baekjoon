#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s1, s2,s3="",s4="";

	cin >> s1 >> s2;
	for (int i = s1.length() - 1; i >= 0; i--)
	{
		s3 += s1[i];
		s4 += s2[i];
	}
	if (stoi(s3) < stoi(s4))cout << s4;
	else cout << s3;
	return 0;
}