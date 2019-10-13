#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	stack<int> st;
	int k,data,sum=0;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> data;
		if (data == 0)
		{
			st.pop();
			continue;
		}
		st.push(data);
	}
	while (!st.empty())
	{
		sum += st.top();
		st.pop();
	}
	cout << sum;
	return 0;
}