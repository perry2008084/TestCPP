/*************************************************************************
	> File Name: match.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 18 Mar 2014 11:45:00 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<regex>

using namespace std;

int main()
{
	if (regex_match ("subject", regex("(sub)(.*)") ))
		cout << "string literal matched\n";

	string  s ("subject");
	regex e ("(sub)(.*)");
	if (regex_match(s,e))
		cout << "string object matched\n";

	if (regex_match (s.begin(), s.end(), e))
		cout << "range matched\n";

	cmatch cm;
	regex_match("subject",cm,e);
	cout << "string literal with " << cm.size() << " matches\n";

	smatch sm;
	regex_match (s, sm, e);
	cout << "string object with " << sm.size() << "matches\n";

	regex_match( s.cbegin(), s.cend(), sm, e);
	cout << "range with " << sm.size() << " matches\n";

	regex_match("subject", cm, e, regex_constants::match_default);

	cout << "the matches were: ";
	for (unsigned i = 0; i < sm.size(); ++i) {
		cout << "[" << sm[i] << "] ";
	}

	cout << endl;

	return 0;
}
