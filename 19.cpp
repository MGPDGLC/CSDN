#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, x, y;
	cout<<"请输入一个数字:"<<endl;
	cin>>n;
	if(n<1)
	{
	cout<<"error"<<endl;
	system("pause");
	return 0;
	}
	if(n== 1)
	{
	cout<<"error"<<endl;
	system("pause");
	return 0;
	}
	x =sqrt(double(n));
	for(y=2; y<=x; y++)
	if(n%y == 0)
	break;
	if(y>= x+1)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	system("pause");
	return 0;
}
