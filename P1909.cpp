#include<iostream>
#include<algorithm>
using namespace std;

struct sale
{
	long long num;
	long  long price;
};

int main(void)
{
	long long  need, compar[3];
	sale pencil[3];
	cin >> need;;
	for (int i = 0; i <= 2; i++)
	{
		cin >> pencil[i].num >> pencil[i].price;
		compar[i] = (need + pencil[i].num - 1) / pencil[i].num * pencil[i].price;
	}
	sort(compar, compar + 3);
	cout << compar[0];
	return 0;
}
