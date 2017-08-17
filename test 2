#include <iostream>
using namespace std;
int digit(int a);
int main()
{
	int n;
	cin >> n;
	n = digit(n);
	cout << n;
}
int digit(int a)
{
	int j;
	if (a < 10)
		j = a;
	else
	{
		int s = 0, k = 10;
		while(s<=a)
		{
			if (k < 100)
			{
				s = 9 + (k - 9) * 2;
				if (s == a)
					return (k % 10);
				if (s == a + 1)
					return (k / 10);
				
			}
			else
			{
				s = 189 + (k - 99) * 3;
				if (s == a)
					return (k % 10);
				if (s == a + 1)
					return ((k / 10) % 10);
				if (s == a + 2)
					return (k / 100);
			}
			k++;
		}
	}
	return j;
}
