#include<iostream>
#include<string>
using namespace std;
bool confer(string str1, string str2)				//比较大小
{
	if (str1.length() > str2.length())				//比较长度
		return true;
	if (str1.length() < str2.length())
		return false;
	for (int i = 0; i <= str1.length(); i++)		//长度相等,逐位比较
	{
		if (str1[i] > str2[i])
			return true;
		if (str2[i] < str2[i])
			return false;
	}
	return true;										//长度相等,每位相等，两数相等
}
void jf(int a[], int b[], int c[])
{
	int i;
	for (i = 1; i <= a[0]; i++)
		c[i] = a[i];									//把a的所有位数复制到c
	c[0] = a[0];										//c的位数暂等于a的位数
	for (i = 1; i <= b[0]; i++)
	{
		if (c[i] < b[i])								
		{
			c[i + 1]--;									//高位减一
			c[i] += 10;									//借位
		}
		c[i] -= b[i];									//相减
	}
	for (i = 1; i < c[0]; i++)
	{
		if (c[i] < 0)
		{
			c[i + 1]--;
			c[i] += 10;
		}
	}
	if (i < c[0])										//有效位数 a[0]-b[0] >= 2
		return;											
	else												//有效位数 == 1 or 0
	{
		while (c[i] == 0 && i >= 1)
			i--;
		c[0] = (i == 0) ? 1 : i;
	}
	return;
}
int main()
{
	string str1, str2;
	int a[500], b[500], c[500];
	int i;
	memset(a, 0, sizeof(a));						//初始化
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	cin >> str1 >> str2;							//输入字符串
	a[0] = str1.length();							//获取字符串长度
	for (i = 1; i <= a[0]; i++)
		a[i] = str1[a[0] - i] - '0';				//倒序转换为整数存放到数组中
	b[0] = str2.length();
	for (i = 1; i <= b[0]; i++)						//···
		b[i] = str2[b[0] - i] - '0';
	if (confer(str1, str2))							//a[] > b[]
		jf(a, b, c);
	else											//b[] > a[]
		jf(b, a, c);
	for (i = c[0]; i >= 1; i--)							//输出
		cout << c[i];
	return 0;
}