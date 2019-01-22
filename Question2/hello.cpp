#include <iostream>
#include <regex>
#include <string>
#include <cstdio>

using namespace std;

bool isSentenceCorrect(string sentence) {
  regex regex("[A-Z][^.?!]*[.?!]$");
  return regex_match(sentence, regex);
}

int main()
{
	string input;
	getline(cin, input);
	
	if(isSentenceCorrect(input))
	{
		cout<<"true";
	}else{
		cout<<"false";
	}
}