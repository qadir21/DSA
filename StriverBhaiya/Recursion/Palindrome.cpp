#include<iostream>
using namespace std;
bool isPalindrome(string &s,int i)
{
	if(i >= s.size() / 2) return true;
	if(s[i] != s[s.size() - i - 1]) return false;
	return isPalindrome(s,i + 1);
}
int main()
{
	string str;
	getline(cin, str);
	bool a = isPalindrome(str,0);
	string x = a == true ? "Palindrome" : "Not a palindrome";
	cout << x;
	return 0;
}