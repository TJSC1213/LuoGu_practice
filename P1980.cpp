#include <iostream>
int main()
{
	using namespace std;
	long n;
	int x;
	int mark = 0;
	cin >> n >> x;
	int j;
	for (int i = 1; i <= n; i++)
	{
		j = i;
		while (j != 0)
		{
			if (j % 10 == x)
				mark++;
			j = j / 10;
		}
	}
	cout << mark;
	return 0;
}
