#include <iostream>
using namespace std;
double vals[] = { 1.0, 148.123, 123.123, 1242.98 };
double &change(int i);
int main()
{
	int i;
	for (i = 0; i < 4; ++i)
		cout << vals[i]<<endl;
	change(1) = 0.1;
	change(2) = 0.1;
	for (i = 0; i < 4; ++i)
		cout << vals[i] << endl;
	system("pause");
}
double &change(int i)
{
	return vals[i];
}
