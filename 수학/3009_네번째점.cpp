/*
 �����ϰ���� -- ���� 3009�� �׹�°��
 Ǯ�� 1 ���� �� ��
*/
/*
#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	int x[3], y[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> x[i] >> y[i];
	}
	sort(x, x + 3);
	sort(y, y + 3);
	if (x[0] != x[1])cout << x[0] << ' ';
	else if (x[1] != x[2])cout << x[2] << ' ';
	if (y[0] != y[1])cout << y[0] << ' ';
	else if (y[1] != y[2])cout << y[2] << ' ';
	return 0;
}*/
/* 
Ǯ�� 2. xor�����ڸ� �̿��ؼ� ������ Ǯ��
*/
/*
#include <iostream>
using namespace std;

int main(void)
{
	int x[3], y[3];
	int x_result = 0, y_result = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> x[i] >> y[i];
		x_result ^= x[i];
		y_result ^= y[i];
	}
	cout << x_result << ' ' << y_result;
	return 0;
}*/