#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("INPUT.txt");
ofstream fout("OUTPUT.txt");
struct ob {
	int a[5000];
	int b[5000];
};
int main()// принцип "было-стало"
{
	int n, m;
	fin >> n;
	ob point;
	for (int i(0); i < n; ++i)
		fin >> point.a[i];
	for (int i(0); i < n; ++i)
		point.b[i] = point.a[i];
	fin >> m;
	int k, l;
	for (int i(0); i < m; ++i)
	{
		fin >> k >> l;
		for (int j(0); j < n; ++j)
			if (point.a[j] == k)
				point.b[j] = l;
	}
	for (int i(0); i < n; ++i)
		fout << point.b[i] << " ";
	fin.close();
	fout.close();
}
