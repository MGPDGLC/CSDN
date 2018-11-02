#include<iostream>
using namespace std;
int main()
{
	double x, y, z, w;
	cout<<"请输入x:"<<endl;
	cin>>x;
	z=x-1;
	w=x+2;
	y=x<1||x>10?z:w;
	cout<<"结果为"<<y<<endl;
	system("pause");
	return 0;
}
