/*������A�ġ�DA��Ϊ1λ���������֡�����Ϊ��A������DA��ɵ�������PA��
���磺����A = 3862767��DA = 6����A�ġ�6���֡�PA��66����ΪA����2��6��
�ָ���A��DA��B��DB�����д�������PA + PB��
�����ʽ��
������һ�������θ���A��DA��B��DB���м��Կո�ָ�������0 < A, B < 1010��
�����ʽ��
��һ�������PA + PB��ֵ��*/

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