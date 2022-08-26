#include<iostream>
using namespace std;
int main(void)
{
	int h0,m0,h1,m1,cha;
	cin>>h0>>m0>>h1>>m1;
	cha=h1*60+m1-h0*60-m0;
	cout<<cha/60<<' '<<cha%60;
	return 0;
}
