#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2;
	int a[500], b[500], c[500];
	int i, len;
	memset(a, 0, sizeof(a));						//初始化
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	cin >> str1 >> str2;							//输入字符串
	a[0] = str1.length();							//获取字符串长度
	for (i = 1; i <= a[0]; i++)						
		a[i] = str1[a[0] - i] - '0';				//倒序转换为整数存放到数组中
	b[0] = str2.length();
	for (i = 1; i <= b[0]; i++)
		b[i] = str2[b[0] - i] - '0';
	len = (a[0] > b[0] ? a[0] : b[0]);				//取两个字符串最大长度
	for (i = 1; i <= len; i++)						
	{												
		c[i] += a[i] + b[i];						//按位做加法
		c[i + 1] = c[i] / 10;						//同时进位处理
		c[i] %= 10;
	}
	len++;											//最大长度加一位
	while (c[len] == 0 && (len > 1))				//若为零
		len--;										//则去掉
	for (i = len; i >= 1; i--)
		cout << c[i];
	return 0;
}