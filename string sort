#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream fin("INPUT.txt");
ofstream fout("OUTPUT.txt");

int main()
{
	char a[10001];
	fin >> a;

	qsort(a, strlen(a), sizeof(char[1]), (int(*)(const void *, const void *)) _strcmpi);

	fout << a;

	fin.close();
	fout.close();
}
