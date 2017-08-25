#include <iostream>
using namespace std;
void Erat(int a);
void check(int *a, int n);
int main()
{
	int m, n;
	cin >> m;
	for (int i(0); i < m; ++i)
	{
		cin >> n;
		Erat(n);
	}
}

void Erat(int a)
{
	int *c = new int[4*a + 1];
	int *c1 = new int[4*a + 1];
	for (int i(0); i < 4*a + 1; ++i)
		c[i] = i;
	for (int p = 2, g = 0; p < 4*a + 1; ++p)
		if (c[p])
		{
			
			c1[g] = c[p];
			for (int j = p*p; j < 4*a + 1; j += p)
			{
				c[j] = 0;
			}
			++g;
		}
	check(c1, a);
}

void check(int *a, int n)// put array with digits and number of simbol
{
	int i = 4;
	if (n < 5)
		cout << a[n-1];
	else//25
	{
		int s;
		bool f = 0;
		while (!f)
		{
			if (n < 47)//s=45 if i==24 and n=46
			{
				s = 4 + (i - 3) * 2;// digit of simbols
				if ((!(a[i] / 100)) && (s == n))// a[3] = 7, a[4] = 11
				{
					cout << (a[i] % 10);
					f = 1;
				}
				if ((!(a[i] / 100)) && (s == n+1))
				{
					cout << (a[i] / 10);
					f = 1;
				}
			}
			else
			{// a[24]=97
				if (n < 476)
				{
					s = 46 + (i - 24) * 3;
					if (!(a[i] / 1000) && (s == n))
					{
						cout << a[i] % 10;
						f = 1;
					}
					if ((!(a[i] / 1000)) && (s == n + 1))
					{
						cout << ((a[i] / 10) % 10);
						f = 1;
					}
					if ((!(a[i] / 1000)) && (s == n + 2))
					{
						cout << (a[i] / 100);
						f = 1;
					}
				}
				else
				{
					s = 475 + (i - 167) * 4;
					if (s == n)
					{
						cout << a[i] % 10;
						f = 1;
					}
					if (s == n + 1)
					{
						cout << (a[i] / 10) % 10;
						f = 1;
					}
					if (s == n + 2)
					{
						cout << (a[i] / 100) % 10;
						f = 1;
					}
					if (s == n + 3)
					{
						cout << (a[i] / 1000);
						f = 1;
					}
				}
			}// a[167]=997, a[168]=1009,     n=479 -> s = 475 + (168-167)*4
			++i;
		}
	}
}
