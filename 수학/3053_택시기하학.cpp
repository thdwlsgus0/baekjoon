#include <stdio.h>
#define pi 3.14159265359
using namespace std;

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%.6f\n%.6f", n*n*pi, n*n*2.0);
	return  0;
}