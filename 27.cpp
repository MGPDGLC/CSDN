#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double f(double x)
{
	return 2*x*x*x-4*x*x+3*x-6;
}
int main()
{
	double l, r, m, c;
	l = -10;
	r = 10;
	do
	{
		m = (l + r) / 2;
		c = r - l;
		if(f(l) * f(m) < 0)
			r = m;
		else if(f(r) * f(m) < 0)
			l = m;
		else
			break;
		}
		while(fabs(c) > 1.0e-2);
	cout<<setiosflags(ios::fixed)<<setprecision(2);
	cout<<"¸ùÎª"<<m<<endl;
	system("pause");
	return 0;
}
