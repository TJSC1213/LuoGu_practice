#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
	double a, b, c;
	cin >> a >> b >> c;
	double p = 0.5 * (a + b + c);
	printf("%.1f",sqrt(p*(p-a)*(p-b)*(p-c)));
	return 0;
}
