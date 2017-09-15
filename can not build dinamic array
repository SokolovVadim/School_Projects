#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


short input(char *buff, short size, FILE *fin);
short sizeof_file(FILE *fin);
void print_for_char(short size, char *buff, FILE *fout);



int main()
{
	FILE *fin, *fout;
	fopen_s(&fin, "INPUT.txt", "r");
	fopen_s(&fout, "OUTPUT.txt", "w");

	short sizebuff = sizeof_file(fin);

	char *buff = (char*)calloc(sizebuff--, sizeof(char));// ++
	if (!fin)
	{
		fprintf(fout, "File was not open");
	}
	else
	{
		
		short countstr(input(buff, sizebuff, fin));// put count of strings in countstr
		
		char *buff_simbols = (char*)calloc(countstr, sizeof(&buff[0]));
		buff_simbols[0] = &(buff[0]);
		
	}

	/*fclose(fin);
	fclose(fout);*/
	system("pause");
}


short sizeof_file(FILE *fin)
{
	fseek(fin, 0, SEEK_END);

	short size(ftell(fin));

	fseek(fin, 0, SEEK_SET);

	return size;
}


short input(char *buff, short size, FILE *fin)
{
	short g(0);
	for (short i(0); i < size; ++i)
	{
		fscanf_s(fin, "%c", &buff[i]);
		if (buff[i] == '\n')
		{
			buff[i] = '\0';
			++g;
		}
	}
	return g;
}



void print_for_char(short size, char *buff, FILE *fout)
{
	for(short i(0);i<size;++i)
		fprintf(fout, "%c", buff[i]);
}


void put_points(char* a)
{

}

//a = malloc(10 * sizeof(int *));
//for (i = 0; i<10; i++)
//	a[i] = malloc((5 + i) * sizeof(int));





//char *simbol;
//char *simbol_buff[10];
//short g(0);
//for (short i(0); i < size; ++i)
//{
//	fscanf_s(fin, "%c", &buff[i]);
//	if (buff[i] == '\n')
//	{
//		buff[i] = '\0';
//		simbol_buff[g] = &buff[i + 1];
//		++g;
//	}
//	/*fprintf(fout,"%c", buff[i]);*/
//}
