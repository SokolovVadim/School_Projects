#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;
int maxsize(int a);
int minsize(int a);
ifstream fin("INPUT.txt");
ofstream fout("OUTPUT.txt");
int main()
{
	short a, b;
	fin >> a >> b;
	int s;
	//1
	int maxa, maxb, mina, minb;
	maxa = maxsize(abs(a));
	maxb = maxsize(abs(b));
	mina = minsize(abs(a));
	minb = minsize(abs(b));
	/*fout << mina << ends << maxa << ends <<
		minb << ends << maxb << endl;*/
	if ((a >= 0) && (b >= 0))
		fout << (maxa - minb);
	if ((a >= 0) && (b < 0))
		fout << (maxa+maxb);
	if ((a < 0) && (b >= 0))
		fout << (-mina-minb);
	if ((a < 0) && (b < 0))
		fout << (-mina+maxb);
	fin.close();
	fout.close();
}
int maxsize(int a)
{
	if (a / 10)
	{
		int array[11], i = 0;
		while (a > 0)
		{
			array[i] = a % 10;
			a /= 10;
			i++;
		}
		sort(array, array + i);
		i--;
		a = i;
		int k = 10, s = 0;
		for (i = a; i >= 0; --i)
		{
			s = s * 10 + array[i];
		}
		return s;
	}
	else return a;
}
int minsize(int a)
{
	fout << a<<"aa";
	if (a / 10)
	{
		int a1 = a;
		int array[11], i = 0;
		while (a > 0)
		{
			array[i] = a % 10;
			a /= 10;
			i++;
		}
		sort(array, array + i);
		a = i;
		i = 0;
		for (i=0; i < a; i++)//
				fout << array[i] << endl;//
		i = 0;
		if (array[0] == 0)
		{
			/*a--;*/
			while ((array[i] == 0)&&(i<a))
			{
				cout << "a" << endl;
				if (array[i + 1])
				{
					swap(array[i + 1], array[0]);
					break;
				}
				++i;
			}
			
			int s = 0;
			for (i = 0; i < a; ++i)//1001	->	0+1=1	->1*10+0=10	->	10*10+0=100	->	100*10+1=1001
			{
				s = s*10 + array[i];
			}
			return s;
		}
		else
		{
			int s = 0;
			for (i = 0; i < a; ++i)
			{
				s = s * 10 + array[i];
			}
			return s;
		}
	}
	else return a;
}
