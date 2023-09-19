#include <iostream>
#include <cstdlib>
using namespace std;



int RandomNumber(int From, int To)
{
	return rand() % (To - From +1) + From;
}

string GenerateWord()
{
	string Word = "";
	for (int i = 1; i <= 4; i++)
	{
		Word += char(RandomNumber(65, 90));
	}
	return Word;
}

string GenerateKey()
{
	string Key = "";
	for (int i = 1; i <= 4; i++)
	{
		Key += GenerateWord();
		if(i != 4) Key += "-";
	}
	return Key;
}

void readArray(string arr[100], int &length)
{
	cout << "Enter How Many Keys?\n";
	cin >> length;

	for (int i = 0; i < length; i++)
		arr[i] = GenerateKey();
}

void printArray(string arr[100], int length)
{
	cout << "Array Elements :\n";
	for (int i = 0; i < length; i++)
	{
		cout <<"Array ["<<i<<"] : "<< arr[i] << "\n";
	}
}



int main()
{
	string arr[100]; int length;

	readArray(arr, length);
	printArray(arr, length);


	return main();

}