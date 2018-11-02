#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;
int main ()
{
	double r, h, x, y, z, w;
	cout<<"请输入r,h,(x,y):"<<endl;
	cin>>r>>h>>x>>y;
	if(r<0||h<0)
		cout<<"错误数据"<<endl;
	z=sqrt(x*x+y*y);
	if(r<=z)
		cout<<"0"<<endl;
	else 
	{
		w=(r-z)*h/r;
	    cout<<setiosflags(ios::fixed)<<setprecision(5);
		cout<<"此点的高度为"<<w<<endl;
	}
		system("pause");
		return 0;
}


		



