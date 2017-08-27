#include <iostream>
#include <cassert>
using namespace std;

void ad();
bool checkfnull(float first);
bool checksnull(float sec);
bool checktnull(float th);

float discr(float first, float second, float third);
float sol_for_twom(float first, float second, float discr);
float sol_for_twop(float first, float second, float discr);

bool bdiscr(float discr);

float sol_for_one(float first, float second);
float sol_for_onee(float second, float third);

int main()
{
	float first = 0.0, second = 0.0, third = 0.0, sol1 = 0.0, sol2 = 0.0;

	ad();
	
	cout << "input first cofficient:\t\t";
	cin >> first;

	cout << "input second cofficients:\t";
	cin >> second;

	cout << "input fird cofficients:\t\t";
	cin >> third;

	if (checkfnull(first))// first!=0
	{
		if (checksnull(second))// second!=0
		{
			float discrim = discr(first, second, third);
			switch (bdiscr(discrim))
			{
			case 2: sol1 = sol_for_twop(first, second, discrim);
				sol2 = sol_for_twom(first, second, discrim);


				cout << "first solution:\t\t" << sol1 << endl;
				cout << "second solution:\t\t" << sol2 << endl;


				break;
			case 1: sol1 = sol_for_one(first, second);
				cout << "solution:\t\t\t" << sol1 << endl;
				break;
			case 0: cout << "Null solutions" << endl;
				break;
			default: cout << "Error!" << endl;
				break;
			}
		}
		else// second = 0
		{
			if (third > 0)
				cout << "Null solutons" << endl;
			if (!checktnull(third))
			{
				sol1 = 0;
				cout << "solution:\t\t" << sol1 << endl;
			}
			if (third < 0)
			{
				sol1 = sqrt(-third);
				sol2 = -sol1;

				cout << "first solution:\t\t" << sol1 << endl;
				cout << "second solution:\t\t" << sol2 << endl;
			}
		}
	}
	else// first = 0
	{
		if (!second)// sec = 0
		{
			if (!third)
				cout << "Infinituly lots of solutions" << endl;
			else
				cout << "Null solutions" << endl;
		}
		else
		{
			if (!third)
				cout << "Infinituly lots of solutions" << endl;
			else
			{
				sol1 = sol_for_onee(second, third);
				cout << "solution:\t\t" << sol1 << endl;
			}
		}
	}


	system("pause");
}

void ad()
{
	cout << "This is a programm to solve an equation" << endl;
	cout << "If u want to do this, please give three cofficients with \"enter\":" << endl;
}

bool checkfnull(float first)
{
	if (first)
		return 1;
	else
		return 0;
}

bool checksnull(float sec)
{
	if (sec)
		return 1;
	else
		return 0;
}

bool checktnull(float th)
{
	if (th)
		return 1;
	else
		return 0;
}

float discr(float first, float second, float third)
{
	return (pow(second, 2) - 4 * first*third);
}

float sol_for_twop(float first, float second, float discr)
{
	return ((-second+sqrt(discr))/(2*first));
}

float sol_for_twom(float first, float second, float discr)
{
	return ((-second - sqrt(discr)) / (2 * first));
}

bool bdiscr(float discr)
{
	if (discr > 0)
		return 2;
	if (discr == 0)
		return 1;
	if (discr < 0)
		return 0;
}

float sol_for_one(float first, float second)
{
	return ((-second) / (2 * first));
}

float sol_for_onee(float second, float third)
{
	return (-third / second);
}
