#include<iostream> 
#include<iomanip>
using namespace std;
#define PI 3.1415926
int main()
{
	double C, r;
	cout<<"������뾶:"<<endl;
	cin>>r;
	C=2*PI*r;
	cout<<"�ܳ�Ϊ:"<<setiosflags(ios::fixed)<<setprecision(5)<<C<<endl;
	system("pause");
	return 0;
}
