#include<iostream>
using namespace std;
int main()
{
	int ys[12];//ÿ��Ԥ��
	int t = 300; //���ٵ�ǰ����
	int mom = 0; //�洢
	for (int i = 0; i < 12; i++)
	{
		cin >> ys[i];
		if ((t - ys[i]) >= 0)
		{
			t -= ys[i];
			mom += t / 100;
			t %= 100;
		}
		else
		{
			t = -1;
			cout << '-' << i + 1;
			break;
		}
		t += 300;
	}
	if (t != -1)
		cout << mom * 100 * 1.2 + t - 300;
	return 0;
}
