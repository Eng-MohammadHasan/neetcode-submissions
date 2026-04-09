#include <cctype>
#include <string> 
#include <iostream>

using namespace std;

class Solution {
public:
	string RemovingSpecialCharactersFromString(string text)
	{
		string UpdatedText = "";
		for (char c : text)
		{
			if (isalnum(c))
			{
				UpdatedText += c;
			}
		}

		return UpdatedText;
	}

	string LowerCaseAllLetters(string text)
	{
		for (char& c : text)
		{
			c = tolower(c);
		}

		return text;
	}

	bool isPalindrome(string s) {
		string Text = RemovingSpecialCharactersFromString(s);
		string TextInLowerCase = LowerCaseAllLetters(Text);

		short FirstDigit = 0;
		short LastDigit = TextInLowerCase.length() - 1;


		while (FirstDigit < LastDigit)
		{
			char LeftPtr = TextInLowerCase[FirstDigit];
			char RightPtr = TextInLowerCase[LastDigit];

			if (LeftPtr != RightPtr)
			{
				cout << LeftPtr;
				cout << RightPtr << endl;
				return false;
			}
			FirstDigit++;
			LastDigit--;
		}

		return true;
	}
};