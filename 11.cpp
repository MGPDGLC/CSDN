#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cout<<"������3������:"<<endl;
	cin>>a>>b>>c;
    d=(a>b)?a:b;
	e=(d>c)?d:c;
	cout<<"������Ϊ"<<e<<endl;
	system ("pause");
	return 0;
}