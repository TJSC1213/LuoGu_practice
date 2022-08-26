#include<iostream>
using namespace std;
int main(void)
{
	int hour[8][2];
	for (int i = 1; i <= 7; i++)
	{
		cin >> hour[i][0] >> hour[i][1];
	}
	int temp;
	int add = 0;
	for (int i = 1; i <= 7; i++)
	{
		if (hour[i][0] + hour[i][1] > add)
		{
			add = hour[i][0] + hour[i][1];
			temp = i;
		}
	}
	if (add <= 8)
		cout << '0';
	else
		cout << temp;
	return 0;
}
