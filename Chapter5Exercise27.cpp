#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int NUM_YEARS = 6;
	int startYear = 1910;
	int yearStep = 20;
	int population;

	ifstream inputFile("C:\\Users\\rhm23\\OneDrive\\Documents\\People-2.txt");

	if (!inputFile)
	{
		cout << "Error: file unable to be opened." << endl;
		return 1;
	}

	cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
	cout << "(each * represents 1,000 people)" << endl;

	for (int i = 0; i < NUM_YEARS; i++)
	{
		inputFile >> population;
		cout << startYear + (i * yearStep) << " ";
		for (int j = 0; j < population / 1000; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	inputFile.close();
	return 0;
}
