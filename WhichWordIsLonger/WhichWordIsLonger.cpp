// WhichWordIsLonger.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    
	string word1 = "", word2 = "";
	string answer = "";
	bool keepgoing = true;
	while (keepgoing)
	{
		//cout << "\n\n  Enter a word (or really, a series of continuous characters with NO spaces): ";
		//cin >> word1;
		//cout << "\n\n  Enter another word (or really, a series of continous characters with NO spaces): ";
		//cin >> word2;

		cout << "\n\n  Enter a phrase: ";
		getline(cin, word1);
		cout << "\n\n  Enter another word (or really, a series of continous characters with NO spaces): ";
		getline(cin, word2);

		if (word1.length() > word2.length())
		{
			cout << "\n\n  The first word you entered, \"" << word1 << "\", is longer than the second, ";
			cout << "with a grand total length of " << word1.length() << " characters.";
		}

		else if (word1.length() < word2.length())
		{
			cout << "\n\n  The second word you entered, \"" << word2 << "\", is longer than the first word you entered, ";
			cout << "\n   and has a grand total length of " << word2.length() << " characters.";
		}

		else if (word1.length() == word2.length())
		{
			cout << "\n\n  Both of the words you entered are the same length, with a length of " << word1.length() << " characters!";
		}

		cout << "\n\n\n  Would you like to compare the length of two more words (Y/N)? ";
		cin >> answer;
		cout << "\n\n  ------------------------------------------------------------------------------------------ \n\n";

		if (answer == "n" || answer == "N")
		{
			keepgoing = false;
		}

	}
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
