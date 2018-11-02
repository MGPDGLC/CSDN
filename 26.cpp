#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double a = 2 , b = 1 , c = 0, d, n, m;
	cout<<"请输入数字:"<<endl;
	cin>>n;
	if(n<1||n>50)
	{
		cout<<"error"<<endl;
		system("pause");
		return 0;
	}
	for(m = 1; m <= n; m++)
	{
		c += a / b;
		d = a + b;
		b = a;
        a = d;
	}
	cout<<setiosflags(ios::fixed)<<setprecision(5);
	cout<<"结果为:"<<c<<endl;
	system("pause");
	return 0;
}

