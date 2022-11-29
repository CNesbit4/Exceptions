#include <iostream>
using namespace std;

char character(char, int);

int main()
{
	try
	{
		cout << character('a', 1);
	}
	catch(string exc)
	{
		cout << exc;
	}
}

char character(char start, int offset)
{
	if (start < 65 || (start > 90 && start < 97) || start > 122)
	{
		throw "invalidCharacterException"; //the instructions say to call this an Expection but I think its a typo
	}
	else if ((start + offset) < 65 || ((start + offset) > 90 && (start + offset) < 97) || (start + offset) > 122)
	{
		throw "invalidRangeException"; //the instructions say to call this an Excpeption but I think its a typo
	}
	else
	{
		return (start - offset);
	}
}