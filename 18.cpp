#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout<<"请输入成绩及素质分:"<<endl;
	cin>>a>>b;
	if(a>90&&b>90)
		cout<<"great"<<endl;
	else if(a>=60||b>=60)
		cout<<"so-so"<<endl;
	else
		cout<<"bad"<<endl;
	system("pause");
	return 0;
}