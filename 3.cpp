#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<"������a,h:"<<endl; 
	double a, h, S;
	cin>>a>>h;
	S=a*h/2;
	cout<<setiosflags(ios::fixed)<<setprecision(5);
	cout<<"S="<<S<<endl;
	system("pause");
	return 0;
 } 
