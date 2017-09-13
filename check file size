#include <iostream>
#include <string>
using namespace std;

void input(char *buff, short size, FILE *fin);
short sizeof_str(FILE *fin);

int main()
{
	FILE *fin, *fout;
	fopen_s(&fin, "INPUT.txt", "r");
	fopen_s(&fout, "OUTPUT.txt", "w");

	short sizebuff = sizeof_str(fin);
	char *buff = new char[sizebuff++];

	if (!fin)
	{
		fprintf(fout, "File was not open");
	}
	else
	{

		fgets(buff, sizebuff, fin);
		
		fprintf(fout, buff);
	}



}


short sizeof_str(FILE *fin)
{
	fseek(fin, 0, SEEK_END);

	short size(ftell(fin));

	fseek(fin, 0, SEEK_SET);

	return size;
}


void input(char *buff, short size, FILE *fin)
{
	fgets(buff, size, fin);
}
