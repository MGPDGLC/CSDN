#include <iostream>
using namespace std;
int main()
{
	int a, b, c, V, S;
    cout<<"请输入a,b,c:"<<endl;
	cin>>a>>b>>c;
	V=a*b*c;
	cout<<"体积为:"<<V<<endl;
	S=(a*b+b*c+a*c)*2;
	cout<<"表面积为:"<<S<<endl;
	system("pause");
	return 0;
 } 
