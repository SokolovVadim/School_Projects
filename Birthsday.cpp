#include <iostream>
#include <cstring>

using namespace std;

FILE *fin, *fout;
const short sizestr = 10;

void input(char a[sizestr], char b[sizestr]);

short put_coef(char Peter[sizestr], char Vasil[sizestr],
	short flagel, bool flagarr);


int main()
{
	fopen_s(&fin, "INPUT.txt", "r");
	fopen_s(&fout, "OUTPUT.txt", "w");

	
	struct array
	{
		short first[3];
		short second[3];
	};

	array data;



	char Peter[sizestr], Vasil[sizestr];

	input(Peter, Vasil);
	for (int i(0); i < 3; ++i)
	{
		data.first[i] = put_coef(Peter, Vasil, i, 1);// Peter
		data.second[i] = put_coef(Peter, Vasil, i, 0);
	}

	// output funct:
	//for (int i(0); i < 3; ++i)
	//{
	//	cout << data.first[i] << ends << data.second[i] << endl;
	//}





	system("pause");
}



short put_coef(char Peter[sizestr], char Vasil[sizestr],
	short flagel, bool flagarr)
{
	short digit = 0;
	short array[3], mass[3];
	array[0] = (Peter[0] - '0') * 10 + (Peter[1] - '0');
	array[1] = (Peter[3] - '0') * 10 + (Peter[4] - '0');
	array[2] = (Peter[6] - '0') * 10 + (Peter[7] - '0');

	mass[0] = (Vasil[0] - '0') * 10 + (Vasil[1] - '0');
	mass[1] = (Vasil[3] - '0') * 10 + (Vasil[4] - '0');
	mass[2] = (Vasil[6] - '0') * 10 + (Vasil[7] - '0');

	for (int i(0); i < 3; ++i)
	{
		if (flagarr)
		{
			if (flagel == i)
				return array[i];
		}
		else
		{
			if (flagel == i)
				return mass[i];
		}
	}
}


void input(char a[sizestr], char b[sizestr])
{
	fgets(a, sizestr, fin);
	fputs(a, fout);

	fgets(b, sizestr, fin);
	fputs(b, fout);
}


void check(short array[sizestr], short mass[sizestr])
{
	short summ1 = 0, summ2 = 0;
	struct summ
	{
		short day[2];
		short month[12];
		short year[2];
	};



	summ data;
	// сравнивать поэлементно

}
