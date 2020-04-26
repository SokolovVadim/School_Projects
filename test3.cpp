#include <iostream>
#include <cstring>
#include <string>
using namespace std;
void search(char *str);
int main()
{
	char a[80];
	gets_s(a);
	search(a);
}
void search(char *str)
{
	bool f = false;
	for (int i(0); i < strlen(str); ++i)
	{
		if (i < (strlen(str) - 2))
			if ((str[i] == 'W') && (str[i + 1] == 'U') && (str[i + 2] == 'B'))
			{
				i += 3;
				while (i < strlen(str))
				{
					if ((str[i] == 'W') && (str[i + 1] == 'U') && (str[i + 2] == 'B'))
						i += 3;
					else
					{
						if (i == strlen(str))
							break;
						else 
						{
							if(f) cout << " ";
							break;
						}
					}
				}
				
			}
		else {
			
			f = 1;
		}
		cout << str[i];
	}
}
