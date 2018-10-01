


//1086
//#include<stdio.h>
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int c = a*b;
//	char str[1000000];
//	sprintf_s(str, "%d", c);
//	int cnt = strlen(str);
//	for (int i = cnt - 1; i >= 0; i--)
//	{
//		cout << str[i];
//	}
//	system("pause");
//	return 0;
//
//}
//

//1018
//#include<iostream>
//#include<stdio.h>
//#include<string>
//
//using namespace std;
//
//int whowins(char a, char b)
//{
//	int win = 0;
//	if (a == 'B'&&b == 'J') win = 2;
//	if (a == 'B'&&b == 'C') win = -2;
//	if (a == 'C')
//	{
//		if (b == 'J') win = -3;
//		if (b == 'B') win = 3;
//	}
//	if (a == 'J'&&b == 'B') win = -5;
//	if (a == 'J'&&b == 'C') win = 5;
//	else win = 0;
//	return win;
//}
//int maxwin(int a, int b, int c)
//{
//	int result_max = 0;
//	result_max = a;
//	if (b > result_max) result_max = b;
//	if (c > result_max) result_max = c;
//	return result_max;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	char a[100005] = { 'a' };
//	char b[100005] = { 'b' };
//	int amax[3], bmax[3];
//	int result_wina = -1;
//	int result_winb = 1;
//	int result_losta = -1;
//	int result_lostb = 1;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i] >> b[i];
//		//cout << a[i] << ' ' << b[i] << endl;
//		if (whowins(a[i], b[i] > 0))
//		{
//			result_losta++;
//			if(whowins(a[i], b[i])%2==0)
//		}
//		if (whowins(a[i], b[i]) < 0) 
//		{
//			result_wina++;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//


//1031
//#include<iostream>
//#include<stdio.h>
//#include<string>
////#define weights[17]={}
//using namespace std;
//int isLegal(string IdNum)
//{
//	int weights[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
//	int sum = 0;
//	int Z;
//	for (int i = 0; i < 17; i++)
//	{
//		if (IdNum[i] <= '9' && IdNum[i] >= '0')
//		{
//			sum += ((IdNum[i] - '0') )*weights[i];
//			//cout << "sum is " << sum << endl;
//			
//		}
//		else return -1;
//	}
//	Z = sum % 11;
//	return Z;
//}
//int main()
//{
//	int N;
//	bool flag = true;
//	char M[11] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
//	string IdNum[105];
//	cin >> N;
//	//cout << isLegal(IdNum);
//	for (int i = 0; i < N; i++)
//	{
//		cin >> IdNum[i];
//	}
//	for (int i = 0; i < N; i++)
//	{
//
//		if (IdNum[i][17] != M[isLegal(IdNum[i])])
//		{
//			//cout << "Z is " << isLegal(IdNum[i]) << endl;
//			//cout << "M is " << M[isLegal(IdNum[i])] << endl;
//			cout << IdNum[i] << endl;
//			flag = false;
//		}
//	}
//	if (flag) cout << "All passed" << endl;
//	system("pause");
//	return 0;
//}


//1028
//#include<iostream>
//#include<stdio.h>
//#include<string>
//
//using namespace std;
//int main()
//{
//	int N;
//	//用引用&
//	string name;
//	int yyyy, mm, dd;
//	cin >> N;
//	return 0;
//	system("pause");
//}

//1017
//#include<iostream>
//#include<stdio.h>
//#include<string>
//
//using namespace std;
//int main()
//{
//	string A;
//	int B;
//	int sizeA, temp;
//	string Result;
//	int temp_r,temp_y;
//	cin >> A >> B;
//	sizeA = A.size();
//	temp = A[0] - '0';
//	for (int i = 1; i <= sizeA; i++)
//	{
//		temp_r = temp / B;
//		if (i == 1)
//		{
//			if (temp_r == 0);
//			if (temp_r != 0)cout << temp_r;
//		}
//		if (i > 1 || sizeA == 1) cout << temp_r;
//		temp_y = temp%B;
//		temp = 10 * temp_y + (A[i] - '0');
//
//	}
//	cout << ' ' << temp_y;
//	system("pause");
//}

//1076
//#include<iostream>
//#include<string>
//
//using namespace std;
//int ans2pass(string ans)
//{
//	if (ans=="A-T")
//	{
//		return 1;
//	}
//	if (ans == "B-T") return 2;
//	if (ans == "C-T") return 3;
//	if (ans == "D-T")return 4;
//	else return -1;
//}
//int main()
//{
//	int N;
//	cin >> N;
//	string temp;
//	int temp_pw;
//	int password[100];
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cin >> temp;
//			temp_pw = ans2pass(temp);
//			if (temp_pw > 0) password[i] = temp_pw;
//		}
//		
//	}
//	for (int i = 0; i < N; i++)
//	{
//		cout << password[i];
//	}
//	system("pause");
//}

//1072

//#include<iostream>
//#include<string>
//
//using namespace std; 
//int main()
//{
//	int n;
//	
//	system("pause");
//	return 0;
//}


//1041
/*#include <iostream>

#include <string>
using namespace std;
struct Student {
	string examid;
	int testseat;
	int examseat;
};


int main()
{

	struct Student s1[1000];
	int n, m;
	int temptest, tempexam;
	string tempid;
	int examlu[1000];
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		//cin >> tempid >> temptest >> tempexam;
		//s1[i].examid = tempid;
		//s1[i].testseat = temptest;
		//s1[i].examseat = tempexam;
		cin >> s1[i].examid >> s1[i].testseat >> s1[i].examseat;
	}
	cin >> m;
	for (int i = 0; i<m; i++)
	{
		cin >> examlu[i];
		for (int j = 0; j<n; j++)
		{
			if (examlu[i] == s1[j].testseat) cout << s1[j].examid << ' ' << s1[j].examseat << endl;
		}
	}
	system("pause");
	return 0;

}*/


//1003
/*#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n, flag[11] = { 0 };
	//vector<string> p;
	string ptmp;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> ptmp;
		//p.push_back(ptmp);
		//cout << p[i] << endl;
	}
	
	if (flag == 1) cout << "YES";
	if (flag == 0) cout << "NO";

	system("pause");
	return 0;
}*/


//1032
/*#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int sum[100002] = { 0 }; //这种赋值可使所有元素都为0
	int num = 0, sco = 0, n, max=0, maxnum=0;
	cin >> n;
	cout << sum[1000];
	for (int i = 1; i <= n; i++)
	{
		cin >> num >> sco;
		//注释掉的是错误的
		//if(sum[num]>=0) 
		sum[num] += sco;
		//if (sum[num] < 0) sum[num] = sco;
		//cout << sum[num] << endl;
	}
	for (int i = 1; i <= n; i++)
	{
		if (sum[i] > max) 
		{
			max = sum[i];
			maxnum = i;
		}
	}
	cout << maxnum << ' ' << max;
	system("pause");
	return 0;
}*/

//1036
/*#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	double n;
	char letter;
	cin >> n >> letter;
	
	for (int j = 0; j < int(n / 2 + 0.5); j++)
	{
		if (j == 0 || j == int(n / 2 + 0.5)-1)
		{
			for (int i = 0; i < n; i++)
			{
				cout << letter;
			}
			cout << endl;
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				if(i==0||i==n-1) cout << letter;
				else cout << ' ';
			}
			cout << endl;
		}
	}

	system("pause");
	return 0;
}*/


//1013
/*#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int isprime(int n)//输入整数，返回是否是素数
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0) return 0;
		
	}
	return 1;
}
int main()
{
	int m, n, line, hy;
	int cnt = 0;
	int i = 2;
	int pri[10001];
	cin >> m >> n;
	while (cnt!=n)
	{
		
		if (isprime(i))
		{
			pri[cnt] = i;
			//cout << pri[i];
			cnt++;
		}
		i++;

	}
	int a = 1;
	for (int i = m-1; i < n; i++, a++)
	{
		cout << pri[i];
		if (a % 10 == 0) 
		{
			cout << endl;
			a = 0;
		}
		else if(i!=n-1)
		{
			cout << " ";
		}
		
	}

	system("pause");
	return 0;
 }*/



//1061
/*#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n, m;
	int scora[101], ranwser[101], sco[101];
	int scotemp = 0;
	int temp;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> scora[i];
		//cout << scora[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> ranwser[i];
		//cout << ranwser[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> temp;
			if (temp == ranwser[j])
			{
				//cout << temp;
				scotemp += scora[j];
				//cout << scotemp << endl;
			}
			
		}
		sco[i] = scotemp;
		scotemp = 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << sco[i] << endl;
	}
	

	system("pause");
	return 0;
}*/


//1002
/*#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
void pin(char n)
{
	switch (n)
	{
	case '0': cout << "ling";
		break;
	case '1':cout << "yi";
		break;
	case '2': cout << "er";
		break;
	case '3':cout << "san";
		break;
	case '4': cout << "si";
		break;
	case '5':cout << "wu";
		break;
	case '6': cout << "liu";
		break;
	case '7':cout << "qi";
		break;
	case '8': cout << "ba";
		break;
	case '9':cout << "jiu";
		break;
	default:
		break;
	}
}

int main()
{
	string num;
	char py[4];
	string b = " ";
	int temp, sum = 0;
	cin >> num;
	
	for (int i = 0; i < num.size(); i++)
	{
		temp = num[i] - '0';
		//cout << temp << endl;
		sum += temp;
	}
	sprintf_s(py,"%d", sum);
	for (int i = 0; py[i] != 0; i++)
	{
			if (i>0)
			{
				cout << " ";
			}
			if (py[i] != 0)
			{
				pin(py[i]);
			}
	}
	//puts(py);
	//cout << py[1] <<endl;
	//printf("%d", sum);
	system("pause");
	return 0;
}*/

//1051
/*#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float r1, p1, r2, p2, r, p;
	float re, im;

	scanf_s("%f %f %f %f", &r1, &p1, &r2, &p2);
	//cout << r1;
	r = r1*r2;
	p = p1 + p2;
	re = r * cos(p);
	im = r*sin(p);
	//cout << re << ' ' << im;
	if (re == 0 && im == 0) cout << 0;
	if (re == 0&&im!=0) printf("%.2fi", im);
	if (im == 0 && re != 0) cout << re;
	else
	{
		if (im > 0) printf("%.2f+%.2fi", re, im);
		if (im < 0) printf("%.2f%.2fi", re, im);
	}
	system("pause");
	return 0;
}*/


//1026
/*#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int h, m, s;
	double c1, c2, temp = 0;
	cin >> c1 >> c2;
	temp = int((c2 - c1)/100+0.5);
	//cout << temp << endl;
	h = temp / 3600;
	m = (temp - h * 3600) / 60;
	s = temp - h * 3600 - m * 60;
	if (h < 10) cout << 0 << h << ':';
	else if (h >= 10) cout << h << ':';
	if (m < 10) cout << 0 << m << ':';
	else if (m >= 10) cout << m << ':';
	if (s < 10) cout << 0 << s;
	else if (s >= 10) cout << s;
	system("pause");
	return 0;
}
*/


//1011
/*#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
	int n;
	long long temp = 0; //【注】此处要用long long，a和b相加后可能大于int型的范围
	long long a[11], b[11], c[11];
	int flag[11];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i] >> c[i];
		//cout << a[i] << b[i] << c[i];
		temp = a[i] + b[i];
		if (temp>c[i])
		{
			flag[i] = 1;
		}
		else flag[i] = 0;
		
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Case #" << i+1 << ": ";
		if (flag[i] == 1) cout << "true"<<endl;
		else cout << "false"<<endl;
	}

	system("pause");
	return 0;
}
*/


//1002
/*#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string n;
	int cnt[11] = { 0 ,0};
	int temp=0, sum=0;
	cin >> n;
	cout << 1 << endl;
	for (int i = 0; i < 10; i++)
	{
		
		for (int j = 0; j < size(n)-1; j++)
		{
			temp = n[i] - '0';
			if (i!=temp)
			{
				cnt[i]++;
			}
			cout << 2 << endl;
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		sum += cnt[i];
	}
	cout << sum;
	system("pause");
	return 0;
}
*/


//1038
/*#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int N, K=0, temp=0;
	int sco[101] = { 0 ,0};

	cin >> N;
	for (int i = 0; i < N; i++, sco[temp]++)
	{
		//cin >> temp;
		scanf_s("%d", &temp);
		
		//cout << temp<<endl;
		//cout << sco[temp]<<endl;
	}
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		scanf_s("%d ", &temp);
		cout << sco[temp];
		if (i != K - 1) cout << ' ';
	}

	//system("pause");
	return 0;
}*/

//1012
/*#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
	int N, temp, A1=0, A2=0, A3=0, A5=0,cnt=0, cnt1=0;
	//int a5[1000] = { 0 };
	int a[1001];
	double A4 = 0, cnt4 = 0;

		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> a[i];
		}
	//cout << N;
	for (int i = 0; i < N; i++)
	{
		temp = a[i] % 5;
		if (temp == 0)
		{

			cnt1++;
			if (a[i] % 2 == 0)
			{
				
				A1 = A1 + a[i];

			}
		}
			
		else if (temp == 1)
		{
			cnt++;

			if (cnt % 2 == 1)
				A2 = a[i] + A2;
			if (cnt % 2 == 0 && cnt != 0)
				A2 = A2 - a[i];
		}
			
		else if (temp == 2)
		{
			A3++;
		}
			
		else if (temp == 3)
		{
			cnt4++;

			A4 = A4 + a[i];
		}
		else if (temp == 4)
		{
			if (A5 < a[i])
				A5 = a[i];
			//a5[i] = a[i];
			//A5 = *max_element(a5, a5+1000);
		}
		
	}
	if (cnt1!=0)
		cout << A1 << ' ';
	else
		cout << 'N' << ' ';
	if (cnt != 0)
		cout << A2 << ' ';
	else
		cout << 'N' << ' ';
	if (A3 != 0)
		cout << A3 << ' ';
	else
		cout << 'N' << ' ';
	if (A4 != 0)
	{
		A4 = A4 / cnt4;
		cout << setiosflags(ios::fixed) << setprecision(1) << A4 << ' ';
		//printf("%.1f ", A4);
	}
	else
		cout << 'N' << ' ';
	if (A5!= 0)
		cout << A5;
	else
		cout << 'N';
	
	system("pause");
	return 0;
}*/

//1010
/*#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> input;
	vector<int> output;
	int in_temp;
	//int in[2001];
	//int in_p[2001];
	int out_c=0;
	int out_p=0;
	do
	{
		cin >> in_temp;
		input.push_back(in_temp);
	}while (getchar() != '\n');
	for (int i = 0; i < input.size()-1; i++)
	{
		if (input[0] == 0)
			cout << input[0] << ' ' << input[1];
		else if (input[1] == 0)
			cout << 0 << ' ' << 0;
		else {
			
			if (i % 2 == 0)
			{
				out_c = input[i] * input[i + 1];
				out_p = input[i + 1] - 1;
				if (out_c != 0)
					cout << out_c << ' ';
				if(out_p!=-1)
				cout << out_p;
				if (out_c != 0 && out_p == -1);
					//cout << ' ';
				if (out_c != 0 && out_p!=0)
					cout << ' ';
			}
			
		}
		
	}

	system("pause");
	return 0;
}*/

//1008
/*#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N, M=0;
	int a[110];
	//int *p;
	cin >> N >> M;

	//【注意】此处不能用while循环，改用do-while
	do
	{
		for (int i = 0; i < N; i++)
		{
			cin >> a[i];
		}
		break;
	}while (getchar() == '\n');
	//p = &a[0];
	if (M == N || M==0 || N==1)
	{
		for (int i = 0; i < N-1; i++)
		{
			cout << a[i]<<' ';
		}
		cout << a[N - 1];
	}
	else if (M > N)
	{
		M = M%N;
		cout << M << endl;
		for (int i = N - M; i < N; i++)
		{
			cout << a[i] << ' ';
		}
		for (int i = 0; i < N - M - 1; i++)
		{
			cout << a[i] << ' ';
		}
		cout << a[N - M - 1];
	}
	else {
		for (int i = N - M; i < N; i++)
		{
			cout << a[i] << ' ';
		}
		for (int i = 0; i < N - M - 1; i++)
		{
			cout << a[i] << ' ';
		}
		cout << a[N - M - 1];
	}
	
	//cout << a[0];
	system("pause");
	return 0;
}*/

//1004
/*#include<string>
#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

struct student {
	string name;
	string id;
	int sco;
};

int main()
{
	int n, sco, pos;
	string max_nam, min_nam;
	string max_id, min_id;
	int max = 0, min=101;
	int temp = 0;
	cin >> n;
	student stud = {"0","0",0};
	for (int i = 0; i < n; i++)
	{
		//scanf_s("%s %s %d", &studmax.name, &studmax.num, &studmax.sco);
		cin >> stud.name >> stud.id >> stud.sco;
		//temp = stud.sco;
		if (stud.sco >= max)
		{
			max = stud.sco;
			max_nam = stud.name;
			max_id = stud.id;

		}
		if (stud.sco <= min)
		{
			min = stud.sco;
			min_nam = stud.name;
			min_id = stud.id;
		}
		
		//cout << studmax.name << ' ' << studmax.num << ' ' << studmax.sco << endl;
		
	}
	cout << max_nam << ' ' << max_id << endl;
	cout << min_nam << ' ' << min_id << endl;

	system("pause");
	return 0;
}*/

//1001
/*#include<math.h>
#include<iostream>

using namespace std;
int main()
{
	int n,i=0;
	cin >> n;
	//if (n == 1) //此处注意不要加这个if判断
	//	cout << 0;

	while (n != 1)
	{
		if (n %2 == 0)
			n = n / 2;
		else
			n = (3 * n + 1) / 2;
		i++;

	}
	cout << i;
	system("pause");
	return 0;
}*/

//1046
/*#include<stdio.h>
#include<iostream>
//#include<ctype.h>
using namespace std;

int main()
{
	int am[100], ah[100], bm[100], bh[100];
	int N=1;
	int ac=0, bc=0;
	int temp;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d %d %d %d", &am[i], &ah[i], &bm[i], &bh[i]);
		temp = am[i] + bm[i];
		if (ah[i] == temp && bh[i] == temp)
		{
			ac = ac;
			bc = bc;
		}
		else if (ah[i] == temp)
			ac++;
		else if (bh[i] == temp)
			bc++;
		
	}
	cout << bc << ' ' << ac << endl;


	system("pause");
	return 0;
}*/

//B-1021
/*#include<stdio.h>
#include<iostream>
#include<ctype.h>
#include<string>
using namespace std;
int main()
{
	string N;
	cin >> N;
	int s = size(N);
	int cnt[10] = {0};

	for (size_t i = 0; i < s; i++)
	{
		cnt[N[i] - 48]++; //N[0]的值为49
		
	}
	for (int j = 0; j < 10; j++)
	{
		if(cnt[j] != 0)
			cout << j << ':' << cnt[j] << endl;
	}

	system("pause");
	return 0;
}*/