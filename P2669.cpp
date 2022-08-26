#include<iostream>
using namespace std;
int main(void)
{
	int k;
	cin >> k;
	long long  wages = 1;
	int day = 1;
	long long goldcoin = 0;
	while (day <= k)
	{
		for (int i = 1; i <= wages; i++)
		{
			goldcoin += wages;
			day++;
			if (day > k)
				break;
		}
		wages++;
	}
	cout << goldcoin;
	return 0;
}
