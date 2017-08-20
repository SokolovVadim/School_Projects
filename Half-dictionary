#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("INPUT.txt");
ofstream fout("OUTPUT.txt");

bool check(char *str, char *sd);
int n;
int l;

int main()
{
	
	char s[1001][11];
	fin >> n;
	
	int k = 0;
	for (int i(0); i < n; ++i)
		fin >> s[i];
	char sd[101];
	l = strlen(sd);
	fin >> sd;
	for (int i(0); i < n; ++i)
		if (check(s[i], sd))
			k++;
	fout << k;
}
struct type
	{
	
		int *a = new int[n];
		int *b = new int[l];
		char s1[11];
		char s2[101];
	};



bool check(char *str, char *sd)
{
	
	type rb;
	for (int i(0); i < n; ++i)
	{
		rb.a[i] = 0;// put 0 in a[] with words
	}
	for (int i(0); i < l; ++i)
	{
		rb.b[i] = 0;// put 0 in a[] with words
	}
	for (int i(0); i < strlen(str); ++i)
	{
		rb.s1[i] = str[i];// put the word in s1
	}
	for (int i(0); i < strlen(str); ++i)
	{
		rb.s2[i] = sd[i];// put simbols in s2
	}
	for (int i(0); i < strlen(sd); ++i)
		for (int g(0); g < strlen(str); ++g)
		{
			if (rb.s1[g] == sd[i])
			{
				rb.a[i] = 1;
			}
		}
}
