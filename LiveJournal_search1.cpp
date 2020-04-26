#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;
ifstream fin("INPUT.txt");
ofstream fout("OUTPUT.txt");
void search1(char str[200][20], int size);
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

	
	fin.close();
	fout.close();
}
void search1(char str[200][20], int size)
{
	qsort(str, 200, sizeof(char[20]), (int(*)(const void *, const void *)) _strcmpi);
	for (int i(0); i < size; ++i)
		fout << str[i] << ", ";
}
