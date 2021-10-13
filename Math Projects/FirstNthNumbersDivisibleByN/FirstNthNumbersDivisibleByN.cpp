/*
	Program Name:		Generator of numbers whose first Nth Numbers are divisable by N
	Program Purpose:	To generate a list of numbers, from smallest to greatest, that follow the
						following property: the first nth numbers of the number are divisable by n.
	Programmer:			Sean B. Higgins
	Date:				August 2, 2016
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	const int NUM_OF_FILES = 9;
	string fileNames[NUM_OF_FILES] = {"Set 1", "Set 2", "Set 3", "Set 4", "Set 5", "Set 6", "Set 7", "Set 8", "Set 9"};
	int dataSetModulo[NUM_OF_FILES] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	ifstream initial_data_set;
	ofstream new_data_set;

	string dataString;
	string newString;
	long tempData;
	long dataLong;

	for (int i = 0; i < 7; i++)
	{
		initial_data_set.open(fileNames[i] + ".txt");
		new_data_set.open(fileNames[i + 1] + ".txt");

		if (initial_data_set.fail())
		{
			cout << "The file '" << fileNames[i] << ".txt' could not be opened." << endl;
		}
		else if (new_data_set.fail())
		{
			cout << "The file '" << fileNames[i+1] << ".txt' could not be opened." << endl;
		}
		else
		{
			cout << "Itteration number: " << i << endl;
			int tempData = 0;

			while (!initial_data_set.eof())
			{
				getline(initial_data_set, dataString);
				cout << "Data in String form: " << dataString << endl;
				dataLong = stoi(dataString);
				cout << "Data in Long form: " << dataLong << endl;
			}

			while (!initial_data_set.eof())
			{
				getline(initial_data_set, dataString);
				dataLong = stoi(dataString);

				cout << "Current Set " << i << " value is " << dataLong << endl;

				for (int j = 0; j < 10; j++)			//Investigate the logic of this algorithm
				{
					tempData = (dataLong * 10) + j;

					if (tempData % dataSetModulo[i] == 0)
					{
						newString = to_string(tempData);
						new_data_set << newString << endl;
					}
				}
			}
		}

		initial_data_set.close();
		new_data_set.close();
	}

	return 0;
}