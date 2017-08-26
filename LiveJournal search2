#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;
ifstream fin("INPUT.txt");
ofstream fout("OUTPUT.txt");
void search1(char str[200][20], int size);
void search2(char s1[200][20], char s2[200][20], int n, int m);
int main()
{
	int n;
	fin >> n;
	char a[200][20];
	for (int i(0); i < n; ++i) //friends
		fin >> a[i];
	int m;
	fin >> m;// he is in friendlist
	char b[200][20];
	for (int i(0); i < m; ++i)
		fin >> b[i];
	fout << "Friends: ";
	search1(a, n);
	fout << "Mutual: ";
	search2(a, b, n, m);
	fin.close();
	fout.close();
}
void search1(char str[200][20], int size)
{
	qsort(str, 200, sizeof(char[20]), (int(*)(const void *, const void *)) _strcmpi);
	for (int i(0); i < size-1; ++i)
		fout << str[i] << ", ";
	if(size) fout << str[size - 1];
}
void search2(char s1[200][20], char s2[200][20], int n, int m)
{
	char str[200][20];
	int g = 0;
	for (int i(0); i < n; ++i)
	{
		for (int j(0); j < m; ++j)
			if (!strcmp(s1[i], s2[j]))
			{
				strcpy_s(str[g], s1[i]);
				g++;
				break;
			}
	}
	if (g)
	{
		for (int i(0); i < g-1; ++i)
		{
			fout << str[i] << ", ";
		}
		fout << str[g - 1];
	}
}
