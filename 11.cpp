#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cout<<"请输入3个数字:"<<endl;
	cin>>a>>b>>c;
    d=(a>b)?a:b;
	e=(d>c)?d:c;
	cout<<"最大的数为"<<e<<endl;
	system ("pause");
	return 0;
}