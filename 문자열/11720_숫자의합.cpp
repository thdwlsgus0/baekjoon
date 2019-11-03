#include <iostream>
using namespace std;

int main(void)
{
	int n,data,sum=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%1d", &data);
		sum += data;
	}
	printf("%d", sum);
	return 0;
}