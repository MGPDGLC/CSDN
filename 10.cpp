#include<iostream>
#include<math.h>
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d, e;
	double x1, x2;
    cout<<"ÇëÊäÈëa,b,c:"<<endl;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d<0)
	{
		cout<<"No solution."<<endl;
	}
	cout<<setiosflags(ios::fixed)<<setprecision(5);
	if(d==0)
	{
		x1=x2=-b/(2*a);
		cout<<"x1=x2="<<x1<<endl;
	}
	if(d>0)
	{
		e=sqrt(d);
	    x1=((-b)+e)/(2*a);
		x2=((-b)-e)/(2*a);
		cout<<"x1="<<x1<<endl;
	    cout<<"x2="<<x2<<endl;
	}
	system("pause");
	return 0;
}

