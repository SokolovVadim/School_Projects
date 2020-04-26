#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream fin("INPUT.txt");
ofstream fout("OUTPUT.txt");

int main()
{
	char a[100001];
	char b[100001];
	fin >> a >> b;
	qsort(a, strlen(a), sizeof(char[1]), (int(*)(const void *, const void *)) _strcmpi);
	qsort(b, strlen(b), sizeof(char[1]), (int(*)(const void *, const void *)) _strcmpi);
	!strcmp(a, b) ? fout << "YES" : fout << "NO";
	fin.close();
	fout.close();
}
