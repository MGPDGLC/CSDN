#include<iostream>
using namespace std;
int main()
{
	int a, b = 1, c = 0, n;
	cout<<"ÇëÊäÈën:"<<endl;
	cin>>n;
	if(n<5||n>11)
	{
		cout<<"error"<<endl;
		system("pause");
		return 0;
	}
	for(a = 1 ; a <= n; a++)
	{
		b = b * a ;
		c = c + b ;
	}
	cout<<c<<endl;
	system("pause");
	return 0;
}
