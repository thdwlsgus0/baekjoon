#include <iostream>
using namespace std;

int main(void)
{
	int n,num_len=0,step_value,goal;
	cin >> n;
	goal = n;
	while (1)
	{
		num_len++;
		step_value = n % 10 * 10 + (n / 10 + n % 10)%10;
		cout << step_value << ' ';
		if (goal == step_value)break;
		n = step_value;
	}
	cout << num_len;
	return 0;
}
