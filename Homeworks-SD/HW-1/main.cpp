#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

int main()
{
	string readInput = "";
	getline(cin, readInput);
	int number = 0;
	if (readInput != "")
	{
		for (int i = 0; i < readInput.length(); i++)
		{
			char currentSymbol = readInput[i];
			if (currentSymbol >= 48 && currentSymbol <= 57)
			{
				int currentNum = (int)currentSymbol - 48;
				if (number != 0 )
				{
					number = (number * 10) + currentNum;
				}
				else
				{
					number = currentNum;
				}
			}
			else if (currentSymbol == 40)
			{
				for (int j = i + 1; j < readInput.length; j++)
				{
					if (readInput[j] >= 65 && readInput[j] <= 90)
					{

					}
				}
			}
			else
			{

			}
		}
	}
	else
	{
		cout << "The string is empty !!!" << endl;
		return 1;
	}

	cout << number << endl;

	return 0;
	
}