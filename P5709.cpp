#include<iostream>
using namespace std;
int main(void)
{
	int m, t, s;
	cin >> m >> t >> s;
	if (t == 0)
	{
		cout << 0;
	}
	else
	{
		if (m < (s + t - 1) / t)
		{
			cout << 0;
		}
		else
		{
			cout << m - (s + t - 1) / t;
		}
	}
	return 0;
}
