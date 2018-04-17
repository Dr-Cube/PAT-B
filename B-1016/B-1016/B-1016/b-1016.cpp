/*正整数A的“DA（为1位整数）部分”定义为由A中所有DA组成的新整数PA。
例如：给定A = 3862767，DA = 6，则A的“6部分”PA是66，因为A中有2个6。
现给定A、DA、B、DB，请编写程序计算PA + PB。
输入格式：
输入在一行中依次给出A、DA、B、DB，中间以空格分隔，其中0 < A, B < 1010。
输出格式：
在一行中输出PA + PB的值。*/

#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	string A, DA, B, DB;
	int PA = 0, PB = 0, da, db;
	int na = 0, nb = 0;
	int sa, sb;
	cin >> A >> DA >> B >> DB;
	sa = A.size();
	sb = B.length();
	for (int i = 0; i < sa; i++)
	{
		if (A[i] == DA[0])
		{
			na++;
			
			
		}
	}
	da = DA[0] - '0';
	//cout << da << '\n';
	for (int i = 0; i < sb; i++)
	{
		if (B[i] == DB[0])
		{
			nb++;
		}
	}
	db = DB[0] - '0';
	//cout << db << '\n';
	for (int i = 0; i < na; i++)
	{
		PA = da*pow(10, i) + PA;
	}
	for (int i = 0; i < nb; i++)
	{
		PB = db*pow(10, i) + PB;
	}

	cout << PA + PB;


	system("pause");
	return 0;
}