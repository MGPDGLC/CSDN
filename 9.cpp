#include<iostream>
using namespace std;
int main()
{
	int grade, s;
	cout<<"请输入成绩(分数):\n";
	cin>>grade;
	if (grade<0||grade>100)
	cout<<"输入有误，请重新输入\n";
	else
	{
	s=grade/10;
	switch(s)
	{
	case 9: cout<<"A\n";break;
	case 8: cout<<"B\n";break;
	case 7: cout<<"C\n";break;
	case 6: cout<<"D\n";break;
    default:cout<<"E\n";break;
	}
	}
	system("pause");
	return 0;
}

