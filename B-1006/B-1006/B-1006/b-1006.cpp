/*B-1006
让我们用字母B来表示“百”、字母S表示“十”，用“12...n”来表示个位数字n（<10），换个格式来输出任一个不超过3位的正整数。
例如234应该被输出为BBSSS1234，因为它有2个“百”、3个“十”、以及个位的4。
输入格式：每个测试输入包含1个测试用例，给出正整数n（<1000）。
输出格式：每个测试用例的输出占一行，用规定的格式输出n。*/

//对n分别用100，10求余，个们输出1到i。这个思路不对。
//用循环

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n; //n为输入，nb为百位B的个数，ns为十位S的个数，b为百位数字，s为十位数字
	int nb = 0;
	int ns = 0;
	cin >> n;
	while (n>=100)
	{
		n = n - 100;
		//nb = nb + 1;
		nb++;
	}
	while (n>=10)
	{
		n = n - 10;
		ns++;
	}
	for (int k = 0; k < nb; k++)
	{
		cout << 'B';
	}
	for (int j = 0; j < ns; j++)
	{

		cout << 'S';
	}
	for (int i = 1; i <= n; i++)
	{

		cout << i;
	}
	return 0;
}