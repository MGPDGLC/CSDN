#include <iostream>
using namespace std;
int main()
{
	int a, b, c, V, S;
    cout<<"������a,b,c:"<<endl;
	cin>>a>>b>>c;
	V=a*b*c;
	cout<<"���Ϊ:"<<V<<endl;
	S=(a*b+b*c+a*c)*2;
	cout<<"�����Ϊ:"<<S<<endl;
	system("pause");
	return 0;
 } 
