#include <iostream>
using namespace std;
long long fact(long long i);
long long func(long long n, long long k);
int main()
{
	long long n, k;
	cin >> n >> k;
	cout << (func(n, k) / fact(n - k));
	/*system("pause");*/
}
long long fact(long long i)
{
	long long k = 1;
	if (i == 1)
		return(1);
	k = fact(i - 1)*i;
	return k;
}
long long func(long long n, long long k)
{
	int j, s = 1;
	for (j = n; j > k; --j)
		s *= j;
	return s;
}
