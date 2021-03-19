#include "stdafx.h"
#include <iostream>
#include <fstream>  
#include <cstring>
using namespace std;

class txt
{
public:
	char stroka[256];
	int  i, j, k;
	string solid= "בגדהזחנ ";
	string soft=  "ןפךעשסכ ";
	string stpd1= "ומאטף‏";
	string stpd2= "טאמו‏ף";
	void set_string()
	{
		cin.getline(stroka,256,'\n');
	}
	const char * get_string()
	{
		return stroka;
	}
	int get_strlen()
	{
		int N = strlen(stroka);
		return N;
	}

	const char * change_gl()
	{
		for ( i = 0; i<256; i++)
		{
			for ( k = 0; k < 4; k++)
			{
				if (stroka[i] == stpd1[k])
				{
					stroka[i] = stpd2[k];
					break;
				}
				if (stroka[i] == stpd2[k])
				{
					stroka[i] = stpd1[k];
					break;
				}
			}
		}
		return stroka;
	}

	const char * change_sogl()
	{
		for (i = 0; i<256; i++)
		{
			for (j = 0; j <=8; j++)
			{
				if (stroka[i] == soft[j])
				{
					stroka[i] = solid[j];
					break;
				}
				if (stroka[i] == solid[j])
				{
					stroka[i] = soft[j];
					break;
				}
			}
		}
		return stroka;
	}
};