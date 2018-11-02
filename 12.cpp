#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cout<<"ÇëÊäÈëx:"<<endl;
	cin>>x;
	if(x<1)
	{
		y=x;
		cout<<"y="<<y<<endl;
	}
	else if(x<=10)
	{
		y=2*x-1;
		cout<<"y="<<y<<endl;
	}
	else
	{
		y=3*x-1;
		cout<<"y="<<y<<endl;
	}
	system("pause");
	return 0;
}
