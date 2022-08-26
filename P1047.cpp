#include <iostream>
using namespace std;
int main(int argc, char const* argv[])
{
	short l[10001] = {0};
	int n, t;
	cin >> t >> n;
	for (int i = 0; i < n; ++i)
	{
		int bgn, end;
		cin >> bgn >> end;
		for (int j = bgn; j <= end; ++j)
			l[j] = 1;
	}
	int count = 0;
	for (int i = 0; i <= t; ++i)
	{
		if (l[i] == 0)
			count++;
	}
	cout << count;
	return 0;
}
