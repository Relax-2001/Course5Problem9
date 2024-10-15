#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int GetDigitFrequency(int MainNumber, short DigitToCheck)
{
	int Remainder = 0, Frequency = 0;

	while (MainNumber > 0)
	{

		Remainder = MainNumber % 10;
		MainNumber = MainNumber / 10;

		if (Remainder == DigitToCheck)
		{
			Frequency++;
		}
	}

	return Frequency;
}

void GetAllDigitsFrequency(int Number)
{
	
	for (int i = 0; i <= 9; i++)
	{

		int DigitFrequency = GetDigitFrequency(Number , i);

		if (DigitFrequency > 0)
		{
			cout << "Digit " << i << "Frequency is " << DigitFrequency << " Time(s)\n";
		}

	}

}

int main()
{

	int Number = ReadPositiveNumber("Enter a positive number");
	GetAllDigitsFrequency(Number);
}

