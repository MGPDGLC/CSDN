#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c;
	double p, x, S, C;
	cout<<"������a,b,c"<<endl;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	x=p*(p-a)*(p-b)*(p-c);
    S=sqrt(x);
	cout<<setiosflags(ios::fixed)<<setprecision(5);
	cout<<"���Ϊ"<<S<<endl;
	C=a+b+c;
	cout<<resetiosflags(ios::fixed);
	cout<<"�ܳ�Ϊ"<<C<<endl;
	system("pause");
	return 0;
}

