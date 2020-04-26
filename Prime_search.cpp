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
	system("pause");
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
			cout << c1[g] << endl;
			for (int j = p*p; j < 4*a + 1; j += p)
			{
				c[j] = 0;
			}
			++g;
		}
	check(c1, a);
}

void check(int *a, int n)
{
	int i = 4;
	if (n < 4)
		cout << a[n - 1];
	else//21
	{
		int s;
		bool f = 0;
		while (!f)
		{
			if (n < 47)
			{
				s = 3 + (i - 3) * 2;
				if ((!(a[i] / 100)) && (s == n))
				{
					cout << (a[i] % 10);
					f = 1;
				}
				if ((!(a[i] / 100)) && (s == n + 1))
				{
					cout << (a[i] / 10);
					f = 1;
				}
			}
			else
			{
				s = 46 + (i-46)*3;
				if (!(a[i] / 1000) && (s == n))
				{
					cout << a[i] % 10;
					f = 1;
				}
				if ((!(a[i] / 1000)) && (s == n + 1))
				{
					cout << ((a[i] / 10)%10);
					f = 1;
				}
				if ((!(a[i] / 1000)) && (s == n + 2))
				{
					cout << (a[i] / 100);
					f = 1;
				}
			}
			++i;
		}
	}
}
