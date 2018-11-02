#include<iostream>
using namespace std;
int main()
{
	int a, n, x, b, c;
	cout<<"ÇëÊäÈëa,n:"<<endl;
	cin>>a>>n;
	b = a;
	c = a;
	if((a<0||a>9)||(n<2||n>9))
	{
		cout<<"error"<<endl;
	    system("pause");
	    return 0;
	}
	for(x = 2;x <= n ;x++)
	{
		a = b + a*10 ;
		c = c + a;

	}
		cout<<"S="<<c<<endl;
		system("pause");
		return 0;
}
		