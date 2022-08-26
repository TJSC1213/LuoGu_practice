#include<iostream>
using namespace std;
int main(void)
{
	int N;
	cin >> N;
	int cube[N][N];
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cube[i][j] = 0;
		}
	}
	cube[0][N / 2] = 1;
	int h = 0;
	int l = N / 2;
	for (int k = 2; k <= N * N; k++)
	{
		if (h == 0 && l != N - 1)
		{
			h = N - 1;
			l = l + 1;
			cube[h][l] = k;
		}
		else if (h != 0 && l == N - 1)
		{
			h = h - 1;
			l = 0;
			cube[h][l] = k;
		}
		else if (h == 0 && l == N - 1)
		{
			h = h + 1;
			cube[h][l] = k;
		}
		else if (h != 0 && l != N - 1)
		{
			if (cube[h - 1][l + 1] == 0)
			{
				h = h - 1;
				l = l + 1;
				cube[h][l] = k;
			}
			else
			{
				h = h + 1;
				cube[h][l] = k;
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << cube[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
