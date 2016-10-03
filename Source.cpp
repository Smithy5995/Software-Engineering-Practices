#include <iostream>

using namespace std;

int sum(int numbers[], int length)
{
	int total = 0;
	for (int pos = 0; pos < length; pos++)
	{
		total += numbers[pos];
		return total;
	}
}

void alphabet(char alphabet[])
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		alphabet[ch] = ch;

	}
}

void display(char alphabet[26])
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		cout << alphabet[ch] << " ";

	}
}

int main()
{
	char alphabetArray[26];
	alphabet(alphabetArray);
	display(alphabetArray);




	system("pause");
}