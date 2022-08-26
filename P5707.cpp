#include<iostream>
using namespace std;
int main(void)
{
	int s, v;
	cin >> s >> v;
	int tr;
	tr = (s + v - 1) / v;
	if (tr > 470)
	{
		int ty;
		ty = 1440 - tr + 470;
		int h = ty / 60;
		int m = ty % 60;
		if (h >= 10)
		{
			if (m >= 10)
				cout << h << ':' << m;
			else
				cout << h << ':' << '0' << m;
		}
		else
		{
			if (m >= 10)
				cout << '0' << h << ':' << m;
			else
				cout << '0' << h << ':' << '0' << m;
		}
	}
	else
	{
		if ((470 - tr) % 60 >= 10)
			cout << '0' << (470 - tr) / 60 << ':' << (470 - tr) % 60;
		else
			cout << '0' << (470 - tr) / 60 << ':' << '0' << (470 - tr) % 60;
	}
	return 0;
}
