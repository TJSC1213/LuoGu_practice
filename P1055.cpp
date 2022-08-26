#include<iostream>
using namespace std;
int main(void)
{
	char ISBN[14];
	int mark = 0;
	int sum = 1;
	cin >> ISBN;
	for (int i = 0; i <= 10; i++)
	{
		if (ISBN[i] != '-')
		{
			mark = sum * (ISBN[i] - 48) + mark;
			++sum;
		}
	}
	if (mark % 11 == 10 && ISBN[12] == 'X')
	{
		cout << "Right";
		return 0;
	}
	else if (mark % 11 == (ISBN[12] - 48))
	{
		cout << "Right";
		return 0;
	}
	else
	{
		if (mark % 11 == 10)
		{
			ISBN[12] = 'X';
			cout << ISBN;
		}
		else
		{
			ISBN[12] = ((mark % 11)+48);
			cout << ISBN;
		}
		return 0;
	}
	return 0;
}
