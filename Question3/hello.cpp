#include <iostream>
#include <set>
#include <string>

using std::string;

class ConcatString
{
public:
        static string longest(const string &s1, const string &s2);
};

string ConcatString::longest(const string &s1, const string &s2)
{

        string s3 = s1 + s2;
        std::set<char> s4(s3.begin(), s3.end());

         string s5 = string(s4.begin(), s4.end());
         
         return s5;
}

int main()
{
        std::string s1,s2;
	getline(std::cin, s1);
	getline(std::cin, s2);
        std::string res = ConcatString::longest(s1, s2);
        std::cout << "The result is:"<< res << std::endl;
        getchar();
        return 0;
}