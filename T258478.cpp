#include<iostream>
using namespace std;
int judge(string);
int main(void)
{
	string str;
	long T;
	short out[10001]={0};
	(cin>>T).get();
	for(int j =1;j<=T-1;j++){
		getline(cin, str);
		out[j] = judge(str);
	}
	getline(cin, str);
	out[T]=judge(str);
	for(long j = 1;j<=T-1;j++){
		if(out[j]==1)
			cout<<"yes\n";
		else if(out[j]==2)
			cout<<"no\n";
	}
	if(out[T]==1)
		cout<<"yes";
	else if(out[T]==2)
		cout<<"no";
	return 0;
}

int judge(string s)
{
		int arr[100]={0};
	for (int i = 0; i <= 20; i++)
		arr[s[i]] ++;
	for(int i=0;i<=99;i++){
		if (arr[i]==4)
				return 1;
	}
	if(arr['X']+arr['D']==2){
		return 1;
	}
	return 2;
}
